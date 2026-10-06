#!/bin/sh
# Download the pristine GNU screen tarballs this tree was derived from.
# The tarballs are not kept in git. Usage: sh fetch.sh [destdir]  (default: parent directory)
# Source: GNU ftp (no URL was recorded in the Makefile or notes; these are the GNU ftp URLs).
set -eu
dest=${1:-..}
mkdir -p "$dest"
fetch_one() {
    name=$1; sum=$2
    url=https://ftp.gnu.org/gnu/screen/$name
    if [ ! -f "$dest/$name" ]; then
        if command -v curl >/dev/null 2>&1; then curl -fL -o "$dest/$name" "$url"
        else wget -O "$dest/$name" "$url"; fi
    fi
    if command -v sha256sum >/dev/null 2>&1; then got=$(sha256sum "$dest/$name" | cut -d' ' -f1)
    else got=$(shasum -a 256 "$dest/$name" | cut -d' ' -f1); fi
    if [ "$got" != "$sum" ]; then
        echo "[ERROR] $name: sha256 $got, expected $sum" >&2
        exit 1
    fi
    echo "[OK] $name"
}
fetch_one screen-4.0.3.tar.gz 78f0d5b1496084a5902586304d4a73954b2bfe33ea13edceecf21615c39e6c77
fetch_one screen-4.9.1.tar.gz 26cef3e3c42571c0d484ad6faf110c5c15091fbf872b06fa7aa4766c7405ac69
