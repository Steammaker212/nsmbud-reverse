/* sub_60733344
 * address: 0x60733344   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60733344(int a1, unsigned int a2)
{
  _BOOL4 v4; // r6
  char v5; // r12

  v4 = sub_6078A030(PlayerMgr_instance) != 1;
  if ( ((unsigned int)&dword_60CBDD20 & ~(1618162556 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60CBDD20) )
  {
    dword_60CBDC20[0] = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC24 = (int)"TalkWindow_Kinopio_00";
    dword_60CBDC28 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC2C = (int)"TalkWindow_Kinopio_00_1";
    dword_60CBDC30 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC34 = (int)"TalkWindow_Kinopio_01";
    dword_60CBDC38 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC3C = (int)"TalkWindow_Kinopio_01_1";
    dword_60CBDC40 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC44 = (int)&byte_60ABC94D;
    dword_60CBDC48 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC4C = (int)&byte_60ABC94D;
    dword_60CBDC50 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC54 = (int)"TalkWindow_Kinopio_03";
    dword_60CBDC58 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC5C = (int)"TalkWindow_Kinopio_03";
    dword_60CBDC60 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC64 = (int)&byte_60ABC94D;
    dword_60CBDC68 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC6C = (int)&byte_60ABC94D;
    dword_60CBDC70 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC74 = (int)&byte_60ABC94D;
    dword_60CBDC78 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC7C = (int)&byte_60ABC94D;
    dword_60CBDC80 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC84 = (int)&byte_60ABC94D;
    dword_60CBDC88 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC8C = (int)&byte_60ABC94D;
    dword_60CBDC90 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC94 = (int)&byte_60ABC94D;
    dword_60CBDC98 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDC9C = (int)&byte_60ABC94D;
    dword_60CBDCA0 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDCA4 = (int)"TalkWindow_KinopioSlot_01";
    dword_60CBDCA8 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDCAC = (int)"TalkWindow_KinopioSlot_01";
    dword_60CBDCB0 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDCB4 = (int)&byte_60ABC94D;
    dword_60CBDCB8 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDCBC = (int)&byte_60ABC94D;
    dword_60CBDCC0 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDCC4 = (int)&byte_60ABC94D;
    dword_60CBDCC8 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDCCC = (int)&byte_60ABC94D;
    dword_60CBDCD0 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDCD4 = (int)"TalkWindow_Kinopio_03";
    dword_60CBDCD8 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDCDC = (int)"TalkWindow_Kinopio_03";
    dword_60CBDCE0 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDCE4 = (int)"TalkWindow_KinopioCoin_01";
    dword_60CBDCE8 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDCEC = (int)"TalkWindow_KinopioCoin_01_1";
    dword_60CBDCF0 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDCF4 = (int)&byte_60ABC94D;
    dword_60CBDCF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDCFC = (int)&byte_60ABC94D;
    dword_60CBDD00 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDD04 = (int)&byte_60ABC94D;
    dword_60CBDD08 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDD0C = (int)&byte_60ABC94D;
    dword_60CBDD10 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDD14 = (int)"TalkWindow_Kinopio_03";
    dword_60CBDD18 = (int)&sead__SafeStringBase__vtable;
    dword_60CBDD1C = (int)"TalkWindow_Kinopio_03";
    sub_60000288();
    _cxa_guard_release(&dword_60CBDD20);
  }
  if ( a2 <= 3 && a2 != 2 )
    sub_6073131C(dword_60CBDBF8, (int)&dword_60CBDC20[16 * FIELD_S8(a1, 100) + 4 * a2 + 2 * v4], 0);
}
