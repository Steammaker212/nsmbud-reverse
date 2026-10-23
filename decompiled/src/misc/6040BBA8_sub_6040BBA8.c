/* sub_6040BBA8
 * address: 0x6040BBA8   size: 632   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040BBA8(int a1)
{
  const unsigned int *v2; // r2
  const unsigned int *v3; // r1
  int result; // r0
  int v5; // r0
  int v6; // r2
  float v7; // s0
  float v8; // s0
  float v9; // s0
  float v10; // s0
  float v11; // s0
  int v12; // r0
  int v13; // r1

  if ( (sub_6045AF54(dword_60C9CFB8, 1, 0x4000, 1) || sub_6045AF54(dword_60C9CFB8, 1, 32, 1) == 1)
    && (FIELD_U8(a1, 729) & 1) != 0 )
  {
    v3 = (const unsigned int *)&nn__hid__NpadId__No2;
    goto LABEL_13;
  }
  if ( (sub_6045AF54(dword_60C9CFB8, 2, 0x4000, 1) || sub_6045AF54(dword_60C9CFB8, 2, 32, 1) == 1)
    && (FIELD_U8(a1, 1133) & 1) != 0 )
  {
    v3 = (const unsigned int *)&nn__hid__NpadId__No3;
    goto LABEL_13;
  }
  if ( (sub_6045AF54(dword_60C9CFB8, 3, 0x4000, 1) || sub_6045AF54(dword_60C9CFB8, 3, 32, 1) == 1)
    && (FIELD_U8(a1, 1537) & 1) != 0 )
  {
    v3 = (const unsigned int *)&nn__hid__NpadId__No4;
LABEL_13:
    nn__hid__SwapNpadAssignment((nn__hid *)&nn__hid__NpadId__No1, v3, v2);
  }
  if ( !sub_607F6904(dword_60CC62E4)
    && (sub_60454CB4(dword_60C9CF0C)
     || sub_6045ADE4(dword_60C9CFB8, 0, 0xFFFFFFF, 0, v7)
     || sub_6045ADE4(dword_60C9CFB8, 1, 0xFFFFFFF, 1, v8)
     || sub_6045ADE4(dword_60C9CFB8, 2, 0xFFFFFFF, 1, v9)
     || sub_6045ADE4(dword_60C9CFB8, 3, 0xFFFFFFF, 1, v10)
     || sub_6045ADE4(dword_60C9CFB8, 4, 0xFFFFFFF, 0, v11) == 1) )
  {
    v12 = FIELD_U32(a1, 2072);
    v6 = v12 + 1;
    if ( v12 > 6 )
      v6 = 0;
  }
  else
  {
    result = FIELD_U32(a1, 2076);
    if ( result )
      return result;
    v5 = FIELD_U32(a1, 2072);
    v6 = v5 + 1;
    if ( v5 > 6 )
      v6 = 0;
  }
  v13 = dword_60C99DD4;
  FIELD_U32(a1, 2072) = v6;
  return sub_6040C14C(a1, v13);
}
