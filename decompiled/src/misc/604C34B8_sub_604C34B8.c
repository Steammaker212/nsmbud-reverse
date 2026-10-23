/* sub_604C34B8
 * address: 0x604C34B8   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C34B8(int a1)
{
  _BYTE *v2; // r6
  int v3; // r5
  int *v4; // r1
  int v6; // r1

  v2 = (_BYTE *)(a1 + 5096);
  v3 = a1 + 4056;
  if ( !FIELD_U8(a1, 5096) )
  {
    sub_60502548(a1 + 4056);
    FIELD_U16(a1, 5108) = 0;
    sub_6047EABC((_DWORD *)(a1 + 4096));
    FIELD_U8(a1, 5099) = 0;
    *v2 = 1;
  }
  if ( !FIELD_U8(a1, 14021) && (FIELD_U16(a1, 6408) & 0x10F0) == 0 )
  {
    v6 = *(_DWORD *)(FIELD_U32(dword_60CCF448, 220) + 20);
    if ( FIELD_F32(v6, 284) == 0.0 && FIELD_F32(v6, 288) == 0.0 )
    {
      *(_BYTE *)(FIELD_U32(a1, 13780) + 64) |= 1u;
      FIELD_U8(a1, 14021) = 1;
      FIELD_U8(a1, 14010) = 1;
      sub_604742D0((_DWORD *)(a1 + 48), 6u, &dword_60CA2AD4, FIELD_U32(a1, 13984), 1.0, 0);
      FIELD_U8(a1, 13898) = 1;
    }
  }
  if ( FIELD_U32(a1, 14140) == 3 )
  {
    FIELD_U32(a1, 40) = &dword_60CA2D6C;
    *(_BYTE *)(FIELD_U32(a1, 13884) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13888) + 64) &= ~1u;
    *(_BYTE *)(FIELD_U32(a1, 13872) + 64) &= ~1u;
    if ( FIELD_U8(a1, 14174) )
    {
      v4 = &dword_60CA2CCC;
    }
    else
    {
      sub_60502C04(v3, &unk_60B02F58, 1);
      v4 = &dword_60CA2CEC;
    }
    StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v4);
    FIELD_U8(a1, 14178) = 0;
    return 14178;
  }
  else if ( FIELD_U8(a1, 14178) )
  {
    return (int)StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA2DAC);
  }
  else
  {
    return sub_604C8318(a1);
  }
}
