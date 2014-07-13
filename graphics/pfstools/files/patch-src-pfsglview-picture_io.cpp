--- src/pfsglview/picture_io.cpp.orig	2006-11-20 12:13:13.000000000 +0000
+++ src/pfsglview/picture_io.cpp	2014-02-20 19:04:01.566588122 +0000
@@ -87,7 +87,7 @@
 		return;
 
 	// only XYZ channels are taken into consideration
-	if( channel != "XYZ" &&  channel != "X00" && channel != "0Y0" && channel != "00Z" ) {
+	if (strcmp(channel,"XYZ") && strcmp(channel,"X00") && strcmp(channel,"0Y0") && strcmp(channel,"00Z")) {
 		if(verbose)
 			fprintf( stderr, "WARNING: wrong channel (PictureIO::setFrame())\n");
 		return;
@@ -573,7 +573,7 @@
 	}	
 	std::sort(vec.begin(), vec.end());
 	
-	printf("size: %d\n", vec.size());
+	printf("size: %lu\n", vec.size());
 	
 	val = vec[0];
 	std::vector<unsigned int> svec;
@@ -589,7 +589,7 @@
 	
 	float dr = svec[ svec.size()-1] / svec[0];
 			
-	printf("min:%ld  max:%ld  svec size: %d  dr:%f\n", vec[0], vec[ vec.size()-1], svec.size(), log10(dr));
+	printf("min:%u  max:%u  svec size: %lu  dr:%f\n", vec[0], vec[ vec.size()-1], svec.size(), log10(dr));
 
 	
 
