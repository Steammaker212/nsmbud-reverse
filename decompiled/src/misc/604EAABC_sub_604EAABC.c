/* sub_604EAABC
 * address: 0x604EAABC   size: 1108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_604EAABC()
{
  dword_60CA5CB8 = 0;
  dword_60CA5CBC = 0;
  dword_60CA5CC0 = 0;
  dword_60CA5CC4 = (int)&sead__SafeStringBase__vtable;
  dword_60CA5CC8 = (int)"Gold";
  dword_60CA5CCC = (int)&sead__SafeStringBase__vtable;
  dword_60CA5CD0 = (int)"Silver";
  dword_60CA5CD4 = (int)&sead__SafeStringBase__vtable;
  dword_60CA5CD8 = (int)"Bronze";
  dword_60CA5CDC = (int)&sead__SafeStringBase__vtable;
  dword_60CA5CE0 = (int)"NoMedal";
  dword_60CA5CE4 = (int)&sead__SafeStringBase__vtable;
  dword_60CA5CE8 = (int)"CountTime";
  dword_60CA5CEC = (int)&sead__SafeStringBase__vtable;
  dword_60CA5CF0 = (int)"CoinCount";
  dword_60CA5CF4 = (int)&sead__SafeStringBase__vtable;
  dword_60CA5CF8 = (int)"CoinLost";
  dword_60CA5CFC = (int)&sead__SafeStringBase__vtable;
  dword_60CA5D00 = (int)"EnemyLost";
  dword_60CA5D04 = (int)&sead__SafeStringBase__vtable;
  dword_60CA5D08 = (int)"1UPCount";
  dword_60CA5D0C = (int)&sead__SafeStringBase__vtable;
  dword_60CA5D10 = (int)"EnemyCount";
  dword_60CA5D14 = (int)&sead__SafeStringBase__vtable;
  dword_60CA5D18 = (int)"BubbleCount";
  dword_60CA5D1C = (int)&sead__SafeStringBase__vtable;
  dword_60CA5D20 = (int)"MetPataCount";
  dword_60CA5D28 = CurrentStateID + 1;
  dword_60CA5D24 = (int)&off_60BFEBD4;
  dword_60CA5D2C = (int)nullsub_4095;
  dword_60CA5D30 = 0;
  dword_60CA5D34 = (int)nullsub_4096;
  dword_60CA5D38 = 0;
  dword_60CA5D3C = (int)nullsub_4097;
  dword_60CA5D40 = 0;
  dword_60CA5D48 = CurrentStateID + 2;
  dword_60CA5D44 = (int)&off_60BFEBD4;
  dword_60CA5D4C = (int)nullsub_4098;
  dword_60CA5D50 = 0;
  dword_60CA5D54 = (int)sub_604E9610;
  dword_60CA5D58 = 0;
  dword_60CA5D5C = (int)nullsub_4099;
  dword_60CA5D60 = 0;
  dword_60CA5D68 = CurrentStateID + 3;
  dword_60CA5D64 = (int)&off_60BFEBD4;
  dword_60CA5D6C = (int)nullsub_4100;
  dword_60CA5D70 = 0;
  dword_60CA5D74 = (int)sub_604E96C8;
  dword_60CA5D78 = 0;
  dword_60CA5D7C = (int)nullsub_4101;
  dword_60CA5D80 = 0;
  dword_60CA5D88 = CurrentStateID + 4;
  dword_60CA5D84 = (int)&off_60BFEBD4;
  dword_60CA5D8C = (int)sub_604E9778;
  dword_60CA5D90 = 0;
  dword_60CA5D94 = (int)sub_604E9794;
  dword_60CA5D98 = 0;
  dword_60CA5D9C = (int)nullsub_4102;
  dword_60CA5DA0 = 0;
  dword_60CA5DA8 = CurrentStateID + 5;
  dword_60CA5DA4 = (int)&off_60BFEBD4;
  dword_60CA5DAC = (int)sub_604E97D8;
  dword_60CA5DB0 = 0;
  dword_60CA5DB4 = (int)sub_604E980C;
  dword_60CA5DB8 = 0;
  dword_60CA5DBC = (int)nullsub_4103;
  dword_60CA5DC0 = 0;
  dword_60CA5DC8 = CurrentStateID + 6;
  dword_60CA5DC4 = (int)&off_60BFEBD4;
  dword_60CA5DCC = (int)nullsub_4104;
  dword_60CA5DD0 = 0;
  dword_60CA5DD4 = (int)sub_604E9850;
  dword_60CA5DD8 = 0;
  dword_60CA5DDC = (int)nullsub_4105;
  dword_60CA5DE0 = 0;
  dword_60CA5DE8 = CurrentStateID + 7;
  dword_60CA5DE4 = (int)&off_60BFEBD4;
  dword_60CA5DEC = (int)G_CoinLost_ref;
  dword_60CA5DF0 = 0;
  dword_60CA5DF4 = (int)sub_604E9A80;
  dword_60CA5DF8 = 0;
  dword_60CA5DFC = (int)nullsub_4106;
  dword_60CA5E00 = 0;
  dword_60CA5E08 = CurrentStateID + 8;
  dword_60CA5E04 = (int)&off_60BFEBD4;
  dword_60CA5E0C = (int)sub_604E9AC0;
  dword_60CA5E10 = 0;
  dword_60CA5E14 = (int)sub_604E9AE0;
  dword_60CA5E18 = 0;
  dword_60CA5E1C = (int)nullsub_4107;
  dword_60CA5E20 = 0;
  dword_60CA5E28 = CurrentStateID + 9;
  dword_60CA5E24 = (int)&off_60BFEBD4;
  dword_60CA5E2C = (int)sub_604E9B4C;
  dword_60CA5E30 = 0;
  dword_60CA5E34 = (int)sub_604E9B84;
  dword_60CA5E38 = 0;
  dword_60CA5E3C = (int)nullsub_4108;
  dword_60CA5E40 = 0;
  dword_60CA5E48 = CurrentStateID + 10;
  dword_60CA5E44 = (int)&off_60BFEBD4;
  dword_60CA5E4C = (int)sub_604E9BC4;
  dword_60CA5E50 = 0;
  dword_60CA5E54 = (int)sub_604E9BD0;
  dword_60CA5E58 = 0;
  dword_60CA5E5C = (int)nullsub_4109;
  dword_60CA5E60 = 0;
  CurrentStateID += 11;
  dword_60CA5E68 = CurrentStateID;
  dword_60CA5E64 = (int)&off_60BFEBD4;
  dword_60CA5E6C = (int)G_EnemyLost_ref;
  dword_60CA5E70 = 0;
  dword_60CA5E74 = (int)sub_604E9E08;
  dword_60CA5E78 = 0;
  dword_60CA5E7C = (int)nullsub_4110;
  dword_60CA5E80 = 0;
  return 0;
}
