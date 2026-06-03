


#include "gtest/gtest.h"
#include "SmartDevice.h"




TEST(SmartDeviceTS, KonstrokturTS) {
    SmartDevice sd;


    EXPECT_EQ(sd.getName(),"Unbekannt" );
    EXPECT_EQ(sd.getStatus(),false );//identisch1
    EXPECT_EQ(sd.getVerbrauch(),0 );
    EXPECT_EQ(sd.getTyp(),GeraeteTyp::Unbekannt);
}
TEST(SmartDeviceTS,setNameTS) {
    SmartDevice sd;
    sd.setName("Wael");
    EXPECT_EQ(sd.getName(),"Wael");
    EXPECT_FALSE(sd.getStatus());//identisch1

}