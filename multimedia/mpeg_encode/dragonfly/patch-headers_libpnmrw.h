--- headers/libpnmrw.h.intermediate	2013-03-09 09:14:37.566326000 +0000
+++ headers/libpnmrw.h
@@ -13,18 +13,7 @@
 #ifndef _PNMRW_H_
 #define _PNMRW_H_
 
-/* CONFIGURE: On some systems, malloc.h doesn't declare these, so we have
-** to do it.  On other systems, for example HP/UX, it declares them
-** incompatibly.  And some systems, for example Dynix, don't have a
-** malloc.h at all.  A sad situation.  If you have compilation problems
-** that point here, feel free to tweak or remove these declarations.
-*/
-#include <malloc.h>
-#if !defined(sco)  &&  !defined(sgi) && !defined(IRIX) && !defined(__FreeBSD__)
-extern char* malloc();
-#endif
-/* End of configurable definitions. */
-
+#include <stdlib.h>
 
 /* Definitions to make PBMPLUS work with either ANSI C or C Classic. */
 
