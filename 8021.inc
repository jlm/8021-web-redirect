# First, kick any stray grouper style URIs into shape.
RewriteRule ^/groups/802/1/(.*)         http://www.ieee802.org/1/$1                 [R=301,L]
RewriteRule ^/groups/802/1$             http://www.ieee802.org/1/                   [R=301,L]    


# Add an [L] flag (last) at a rule unless you want further processing.
# If it's a simple redirect or proxy for a specific page, should be done after that, yes?

RewriteRule ^/1/$                       http://1.ieee802.org                        [P,L]
RewriteRule ^/1/index.html              http://1.ieee802.org                        [P,L]
RewriteRule ^/1/pages/802.1ae.html      http://1.ieee802.org/security/802-1ae/      [P,L]
RewriteRule ^/1/pages/802.1aebn.html    http://1.ieee802.org/security/802-1aebn/    [P,L]
RewriteRule ^/1/pages/802.1aebw.html    http://1.ieee802.org/security/802-1aebw/    [P,L]
RewriteRule ^/1/pages/802.1aecg.html    http://1.ieee802.org/security/802-1aecg/    [P,L]
RewriteRule ^/1/pages/802.1ar.html      http://1.ieee802.org/security/802-1ar/      [P,L]
RewriteRule ^/1/pages/802.1au.html      http://1.ieee802.org/dcb/802-1qau/          [P,L]
RewriteRule ^/1/pages/802.1az.html      http://1.ieee802.org/dcb/802-1qaz/          [P,L]
RewriteRule ^/1/pages/802.1bb.html      http://1.ieee802.org/dcb/802-1qbb/          [P,L]
RewriteRule ^/1/pages/802.3bd.html      http://1.ieee802.org/dcb/802-3bd/           [P,L]
RewriteRule ^/1/pages/802.1bg.html      http://1.ieee802.org/dcb/802-1qbg/          [P,L]
RewriteRule ^/1/pages/802.1br.html      http://1.ieee802.org/dcb/802-1br/           [P,L]
RewriteRule ^/1/pages/802.1cb.html      http://1.ieee802.org/tsn/802-1cb/           [P,L]
RewriteRule ^/1/pages/802.1cc.html      http://1.ieee802.org/tsn/802-1qcc/          [P,L]
RewriteRule ^/1/pages/802.1cd.html      http://1.ieee802.org/dcb/802-1qcd/          [P,L]
RewriteRule ^/1/pages/802.1cf.html      http://1.ieee802.org/omniran/802-1cf/       [P,L]
RewriteRule ^/1/pages/802.1ch.html      http://1.ieee802.org/tsn/802-1qch/          [P,L]
RewriteRule ^/1/pages/802.1ci.html      http://1.ieee802.org/tsn/802-1qci/          [P,L]
RewriteRule ^/1/pages/802.1cj.html      http://1.ieee802.org/tsn/802-1qcj/          [P,L]
RewriteRule ^/1/pages/802.1ck.html      http://1.ieee802.org/security/802-1xck/     [P,L]
RewriteRule ^/1/pages/802.1cm.html      http://1.ieee802.org/tsn/802-1cm/           [P,L]
RewriteRule ^/1/pages/802.1cp.html      http://1.ieee802.org/tsn/802-1qcp/          [P,L]
RewriteRule ^/1/pages/802.1cr.html      http://1.ieee802.org/tsn/802-1qcr/          [P,L]
RewriteRule ^/1/pages/802.1cs.html      http://1.ieee802.org/tsn/802-1cs/           [P,L]
RewriteRule ^/1/pages/802d.html         http://1.ieee802.org/tsn/802d/              [P,L]
RewriteRule ^/1/pages/802e.html         http://1.ieee802.org/security/802e/         [P,L]
RewriteRule ^/1/pages/802.1xbx.html     http://1.ieee802.org/security/802-1xbx/     [P,L]
RewriteRule ^/1/pages/802.1x-2010.html  http://1.ieee802.org/security/802-1x/       [P,L]
RewriteRule ^/1/pages/OIDS.html         http://1.ieee802.org/object-identifiers/    [P,L]

RewriteRule ^/1/maint.html              http://1.ieee802.org/maintenance/           [P,L]
RewriteRule ^/1/meetings$               http://1.ieee802.org/meetings/              [P,L]
RewriteRule ^/1/meetings/index.html     http://1.ieee802.org/meetings/              [P,L]
RewriteRule ^/1/meetings/(.*)           http://1.ieee802.org/meetings/$1            [P,L]

RewriteRule ^/1/filenaming.html         http://1.ieee802.org/filenaming-conventions/     [P,L]
RewriteRule ^/1/files/public/maint/new-requests/home.html    http://www.802-1.org/       [P,L]
RewriteRule ^/1/files/public/maint/new-requests/             http://www.802-1.org/       [P,L]
RewriteRule ^/1/files/public/maint/new-requests              http://www.802-1.org/       [P,L]

RewriteRule "^/1/(tsn.*)$"              http://1.ieee802.org/$1                     [P,L]
RewriteRule ^/1/tsn                     http://1.ieee802.org/tsn/                   [P,L]

RewriteRule "^/1/(dcb.*)$"              http://1.ieee802.org/$1                     [P,L]
RewriteRule ^/1/dcb                     http://1.ieee802.org/dcb/                   [P,L]

RewriteRule "^/1/(security.*)$"         http://1.ieee802.org/$1                     [P,L]
RewriteRule ^/1/security                http://1.ieee802.org/security/              [P,L]

RewriteRule "^/1/(omniran.*)$"          http://1.ieee802.org/$1                     [P,L]
RewriteRule ^/1/omniran                 http://1.ieee802.org/omniran/               [P,L]

# The /1/files area,   apart from any explicit files named above, is still being served off grouper.
# The /1/private area, apart from any explicit files named above, is still being served off grouper.


# Th-th-that's all, folks!
