/* The program's own file for MasterFork (screen.c): dos.library's names
 * (Input, Flush, SetMode ...) clash with screen's own functions, so the
 * Amiga calls live here. */
#include <string.h>
#include <proto/dos.h>

void amiga_self_path(char *buf, int max, const char *argv0)
{
  BPTR dir;

  buf[0] = 0;
  if ((dir = GetProgramDir()) && NameFromLock(dir, (STRPTR)buf, max))
    AddPart((STRPTR)buf, FilePart((STRPTR)argv0), max);
  else
    {
      strncpy(buf, argv0, max - 1);
      buf[max - 1] = 0;
    }
}
