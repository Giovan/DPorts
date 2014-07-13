--- src/pfs/pfs.h.orig	2006-03-01 17:21:16.000000000 +0000
+++ src/pfs/pfs.h	2014-02-20 19:04:01.566588122 +0000
@@ -115,6 +115,7 @@
   class TagIterator 
     {
     public:
+      virtual ~TagIterator() {};
       /**
        * Get next item on the list.
        *
@@ -135,6 +136,7 @@
   class TagContainer
     {
     public:
+      virtual ~TagContainer() {};
       /**
        * Get a string tag of the name tagName from the TagContainer.
        * @param tagName name of the tag to retrieve
@@ -181,6 +183,7 @@
  */
   class Channel : public Array2D {
   public:
+    virtual ~Channel() {};
     /**
      * Gets width of the channel (in pixels).
      * This is a synonym for Array2D::getCols().
@@ -226,6 +229,7 @@
   class ChannelIterator 
     {
     public:
+      virtual ~ChannelIterator() {};
       /**
        * Get next item on the list.
        */
@@ -580,7 +584,9 @@
        */
       Exception( const char* const message )
 	{
-          strcpy( msg, message );
+          const size_t s = sizeof(msg)/sizeof(msg[0]) - 1;
+          strncpy( msg, message, s );
+          msg[s] = '\0';
 	}
 			
       ~Exception() {};
