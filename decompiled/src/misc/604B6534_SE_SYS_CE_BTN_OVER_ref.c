/* SE_SYS_CE_BTN_OVER_ref
 * address: 0x604B6534   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall SE_SYS_CE_BTN_OVER_ref(int a1)
{
  int v2; // r0
  _DWORD *v3; // r5
  int v4; // r0
  _DWORD *v5; // r6
  _DWORD *v6; // r0
  int v7; // r1
  const char *v8; // r1
  unsigned int result; // r0

  v2 = FIELD_U32(a1, 3652);
  if ( v2 )
  {
    v3 = (_DWORD *)(v2 + 40);
    v5 = (_DWORD *)(a1 + 3724);
    v4 = FIELD_U32(a1, 3724);
    if ( (unsigned int)(v4 - 5) <= 7 && ((0xE1u >> (v4 - 5)) & 1) != 0 )
    {
      sub_6047F28C(v3, (int)"SE_SYS_DECIDE", 5);
      sub_6047F340(v3, (int)"SE_SYS_CURSOR", 5);
      sub_6047F2C8(v3, (int)"SE_SYS_CE_BTN_OVER", 5);
      sub_6047F304(v3, (int)"SE_SYS_CE_BTN_OVER_OFF", 5);
      v6 = v3;
      v7 = 5;
    }
    else if ( (v4 | 1) == 0x15 )
    {
      sub_6047F28C(v3, (int)"SE_SYS_DECIDE", 15);
      sub_6047F340(v3, (int)"SE_SYS_CURSOR", 15);
      v6 = v3;
      v7 = 15;
    }
    else
    {
      sub_6047F28C(v3, (int)"SE_SYS_DECIDE", 9);
      sub_6047F340(v3, (int)"SE_SYS_CURSOR", 9);
      v6 = v3;
      v7 = 9;
    }
    sub_6047F37C(v6, v7);
    if ( FIELD_U32(a1, 3652) )
    {
      if ( sub_604B6400(a1) == 1 )
        v8 = "SE_SYS_BACK";
      else
        v8 = "SE_SYS_DECIDE";
      sub_604B74E8(FIELD_U32(a1, 3652), v8);
    }
  }
  else
  {
    v5 = (_DWORD *)(a1 + 3724);
  }
  FIELD_U8(a1, 3776) = 0;
  result = *v5 & 0xFFFFFFFE;
  if ( result != 6 )
  {
    result = dword_60CC6B68;
    if ( !FIELD_U8(dword_60CC6B68, 65) )
    {
      FIELD_U8(a1, 3776) = 1;
      return sub_6081699C();
    }
  }
  return result;
}
