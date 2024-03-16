require recipes-images/images/phytec-headless-image.bb

SUMMARY =  "my image"

IMAGE_FEATURES += "splash ssh-server-openssh "

LICENSE = "MIT"

inherit 

CONFLICT_DISTRO_FEATURES = "x11 wayland"

IMAGE_INSTALL += "\
    packagegroup-base \
"

