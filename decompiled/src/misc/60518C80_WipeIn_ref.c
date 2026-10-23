/* WipeIn_ref
 * address: 0x60518C80   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void (*WipeIn_ref())()
{
  dword_60CA8938 = 0;
  dword_60CA893C = 0;
  dword_60CA8940 = 0;
  dword_60CA8944 = (int)&sead__SafeStringBase__vtable;
  dword_60CA8948 = (int)"WipeIn";
  dword_60CA894C = (int)&sead__SafeStringBase__vtable;
  dword_60CA8950 = (int)"Loop";
  dword_60CA8954 = (int)&sead__SafeStringBase__vtable;
  dword_60CA8958 = (int)"Out";
  dword_60CA8960 = CurrentStateID + 1;
  dword_60CA895C = (int)&off_60BFFB18;
  dword_60CA8964 = (int)sub_60518824;
  dword_60CA8968 = 0;
  dword_60CA896C = (int)sub_60518848;
  dword_60CA8970 = 0;
  dword_60CA8974 = (int)nullsub_4254;
  dword_60CA8978 = 0;
  dword_60CA8980 = CurrentStateID + 2;
  dword_60CA897C = (int)&off_60BFFB18;
  dword_60CA8984 = (int)nullsub_4255;
  dword_60CA8988 = 0;
  dword_60CA898C = (int)nullsub_4256;
  dword_60CA8990 = 0;
  dword_60CA8994 = (int)nullsub_4257;
  dword_60CA8998 = 0;
  CurrentStateID += 3;
  dword_60CA89A0 = CurrentStateID;
  dword_60CA899C = (int)&off_60BFFB18;
  dword_60CA89A4 = (int)sub_605188A4;
  dword_60CA89A8 = 0;
  dword_60CA89AC = (int)nullsub_4258;
  dword_60CA89B0 = 0;
  dword_60CA89B4 = (int)nullsub_4259;
  dword_60CA89B8 = 0;
  return nullsub_4259;
}
