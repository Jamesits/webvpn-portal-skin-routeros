RouterOS style Cisco Clientless SSL / AnyConnect login portal.

## Installation

### Using ASDM

1. Goto Configuration -> Remote Access VPN -> Clientless SSL VPN Access -> Portal
2. Under Web Contents, import all files under `uploads/` one by one, and choose "No" on "Destination" option under import dialog
3. Under Customization, import `RouterOS.xml`.

(If it says "ASDM could not find the default customization profile", import "DfltCustomization.xml" first and name it exactly `DfltCustomization`.)

### Using command line

TODO

## FAQ

**Browser unable to detect character encoding**

```
webvpn
no character-encoding
```

Or set Clientless SSL VPN Access -> Advanced -> Encoding -> Global Encoding Type to `none` in ASDM.