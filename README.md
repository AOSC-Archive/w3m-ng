w3m
===

a text-based web browser as well as a pager like `more' or `less'.

What's happening?
---
The original upstream w3m seems to be dead so we forked one.

However, we unpacked the tarball instead of converting the CVS repository because something in scripts/w3mman was always locked.
What's more, it seems that we had a broken `git.pm` so we couldn't do `git cvsimport`, even to the half-[cloned](https://github.com/akavel/cvsclone) cvs repo.
