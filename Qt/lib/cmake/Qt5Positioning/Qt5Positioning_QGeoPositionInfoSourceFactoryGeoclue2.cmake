
add_library(Qt5::QGeoPositionInfoSourceFactoryGeoclue2 MODULE IMPORTED)

_populate_Positioning_plugin_properties(QGeoPositionInfoSourceFactoryGeoclue2 RELEASE "position/qtposition_geoclue2.dll")
_populate_Positioning_plugin_properties(QGeoPositionInfoSourceFactoryGeoclue2 DEBUG "position/qtposition_geoclue2d.dll")

list(APPEND Qt5Positioning_PLUGINS Qt5::QGeoPositionInfoSourceFactoryGeoclue2)
