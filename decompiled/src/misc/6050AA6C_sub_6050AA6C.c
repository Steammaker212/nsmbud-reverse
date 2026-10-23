/* sub_6050AA6C
 * address: 0x6050AA6C   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6050AA6C()
{
  dword_60CA7D80 = ++CurrentStateID;
  dword_60CA7D7C = (int)&off_60BFF460;
  dword_60CA7D84 = (int)nullsub_4210;
  dword_60CA7D88 = 0;
  dword_60CA7D8C = (int)sub_60509F2C;
  dword_60CA7D90 = 0;
  dword_60CA7D94 = (int)nullsub_4211;
  dword_60CA7D98 = 0;
  dword_60CA7DB8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7DBC = (int)"In";
  dword_60CA7DC0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7DC4 = (int)"Loop";
  dword_60CA7DC8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7DCC = (int)"Out";
  dword_60CA7DD0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7DD4 = (int)"Key";
  dword_60CA7DD8 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7DDC = (int)"Decide";
  sub_60000288();
  dword_60CA7DA0 = (int)&sead__SafeStringBase__vtable;
  unk_60CA7DA4 = "G_Loop_00";
  unk_60CA7DA8 = &sead__SafeStringBase__vtable;
  dword_60CA7DAC = (int)"G_Btn_00";
  dword_60CA7DB0 = (int)&sead__SafeStringBase__vtable;
  dword_60CA7DB4 = (int)"G_Key_00";
  return sub_60000288();
}
