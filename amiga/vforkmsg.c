/* A vfork child's messages (VFORK_ONLY: window.c, fileio.c, display.c,
 * attacher.c). Until its exec the child shares the parent's data and heap,
 * so Msg() and Panic(), which go through the parent's displays, are not
 * for it: these write to the child's own stderr (the window's pty once it
 * is set up) and VforkPanic leaves with _exit. */
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void
VforkMsg(int err, const char *fmt, ...)
{
  char buf[256];
  va_list ap;
  int n;

  va_start(ap, fmt);
  vsnprintf(buf, sizeof(buf) - 64, fmt, ap);
  va_end(ap);
  n = strlen(buf);
  if (err)
    n += snprintf(buf + n, sizeof(buf) - n, ": %s", strerror(err));
  buf[n++] = '\r';
  buf[n++] = '\n';
  write(2, buf, n);
}

void
VforkPanic(int err, const char *fmt, ...)
{
  char buf[200];
  va_list ap;

  va_start(ap, fmt);
  vsnprintf(buf, sizeof(buf), fmt, ap);
  va_end(ap);
  VforkMsg(err, "%s", buf);
  _exit(1);
}
