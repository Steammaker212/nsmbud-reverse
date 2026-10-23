/* sub_60498514
 * address: 0x60498514   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60498514(int a1)
{
  _BYTE *v2; // r5
  int result; // r0
  unsigned int v4; // r6
  unsigned int v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  _BYTE v8[168]; // [sp+0h] [bp-A8h] BYREF

  v2 = (_BYTE *)(a1 + 146857);
  if ( FIELD_U8(a1, 146857) )
  {
    result = sub_60499A20(a1);
    if ( !result )
    {
      result = FIELD_U8(a1, 4690);
      if ( !FIELD_U8(a1, 4690) )
      {
        sub_605025FC(a1 + 3648);
        FIELD_U16(a1, 4700) = 0;
        result = (int)sub_6047EABC((_DWORD *)(a1 + 3688));
        *v2 = 0;
      }
    }
  }
  else if ( FIELD_S32(a1, 146864) < 1 )
  {
LABEL_11:
    sub_60834AE0(a1 + 5728, 4, a1 + 146692, 6);
    sub_6049A100(a1, a1 + 146692);
    qmemcpy(v8, (const void *)(a1 + 146692), 0x90u);
    v6 = sub_60834718(v8, 6);
    v7 = (_DWORD *)sub_60834644(v6);
    v7[10] = FIELD_U32(a1, 128748);
    v7[28] = FIELD_U32(a1, 128752);
    v7[46] = FIELD_U32(a1, 128756);
    v7[64] = FIELD_U32(a1, 128760);
    if ( dword_60C99E1C )
      sub_603FE994(dword_60C99E1C);
    FIELD_U8(a1, 56) = 1;
    return (int)StateMgr__changeState((StateMgr *)(a1 + 40), (StateBase *)&dword_60CA06C0);
  }
  else
  {
    v4 = 0;
    while ( 1 )
    {
      v5 = 0;
      if ( v4 < 4 )
        v5 = v4;
      result = sub_604A4CB8(a1 + 20556 * v5 + 5728);
      if ( result )
        break;
      if ( (signed int)++v4 >= FIELD_U32(a1, 146864) )
        goto LABEL_11;
    }
  }
  return result;
}
