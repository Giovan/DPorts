
$FreeBSD: head/security/tinyca/files/patch-lib::CA.pm 340725 2014-01-22 17:40:44Z mat $

--- lib/CA.pm.orig
+++ lib/CA.pm
@@ -883,7 +883,7 @@
    };
 
    # create configuration file
-   my $in  = $self->{'init'}->{'templatedir'}."/openssl.cnf";
+   my $in  = $self->{'init'}->{'templatedir'}."/tinyca.cnf";
    my $out = $self->{$opts->{'name'}}->{'dir'}."/openssl.cnf";
 
    open(IN, "<$in") || do {
