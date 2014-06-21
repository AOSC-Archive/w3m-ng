w3m
===

a text-based web browser as well as a pager like `more` or `less`.

What's happening?
---
The original upstream w3m seems to be dead so we forked one.

However, we unpacked the tarball instead of converting the CVS repository because something in scripts/w3mman was always locked.
What's more, it seems that we had a broken `git.pm` so we couldn't do `git cvsimport`, even on the
half-[cloned](https://github.com/akavel/cvsclone) cvs repo.

For historical changes, go to the original site: http://w3m.sourceforge.net/

TODO
---

- Better localization, more languages. 
- Code cleanup and if possible, refresh them.
- Optimize usage of imaging libraries.
