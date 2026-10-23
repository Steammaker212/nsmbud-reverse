/* sub_601C5484
 * address: 0x601C5484   size: 644   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_601C5484(int a1)
{
  signed int result; // r0
  int v3; // r1
  int v4; // r2
  unsigned int v5; // r1
  bool v6; // zf
  int v7; // r1
  bool v8; // zf

  result = FIELD_U32(a1, 548);
  switch ( result )
  {
    case 0:
      goto LABEL_11;
    case 1:
      v3 = FIELD_U32(a1, 264);
      if ( v3 >= 6 )
      {
        v5 = 0;
        if ( FIELD_U32(dword_60C99DEC, 48) == 7 )
          goto LABEL_27;
        v5 = 1;
        if ( FIELD_U32(dword_60C99DEC, 120) == 7 )
          goto LABEL_27;
        v5 = 2;
        if ( FIELD_U32(dword_60C99DEC, 192) == 7 )
          goto LABEL_27;
        v5 = 3;
        if ( FIELD_U32(dword_60C99DEC, 264) == 7 )
          goto LABEL_27;
        v5 = 4;
        if ( FIELD_U32(dword_60C99DEC, 336) == 7 )
          goto LABEL_27;
        v5 = 6;
        v6 = FIELD_U32(dword_60C99DEC, 408) == 7;
      }
      else
      {
        v4 = dword_60AFC220[v3];
        v5 = 0;
        if ( FIELD_U32(dword_60C99DEC, 48) == v4 )
          goto LABEL_27;
        v5 = 1;
        if ( FIELD_U32(dword_60C99DEC, 120) == v4 )
          goto LABEL_27;
        v5 = 2;
        if ( FIELD_U32(dword_60C99DEC, 192) == v4 )
          goto LABEL_27;
        v5 = 3;
        if ( FIELD_U32(dword_60C99DEC, 264) == v4 )
          goto LABEL_27;
        v5 = 4;
        if ( FIELD_U32(dword_60C99DEC, 336) == v4 )
          goto LABEL_27;
        v5 = 6;
        v6 = FIELD_U32(dword_60C99DEC, 408) == v4;
      }
      if ( v6 )
        v5 = 5;
LABEL_27:
      if ( v5 >= 6 )
        v5 = 0;
      if ( *(_BYTE *)(dword_60C99DEC + 72 * v5 + 66) )
        v7 = dword_60AFC238[dword_60AFC268[FIELD_U32(a1, 268)]];
      else
        v7 = 750;
      if ( !FIELD_U8(a1, 552) )
      {
        sub_60236074(a1 + 460);
        result = 2;
        goto LABEL_38;
      }
      v8 = (FIELD_U8(a1, 216) & 2) == 0;
      if ( (FIELD_U8(a1, 216) & 2) == 0 )
        v8 = FIELD_U8(a1, 553) == 0;
      if ( !v8 || FIELD_F32(a1, 128) == 0.0 && FIELD_F32(a1, 132) == 0.0 && FIELD_F32(a1, 136) == 0.0 )
      {
        sub_602360C0(a1 + 460);
        result = 3;
LABEL_38:
        FIELD_U32(a1, 548) = result;
        return result;
      }
      return EffectWrapper_update((EffectWrapper *)(a1 + 444), v7, (Vec3 *)(a1 + 80), 0, 0);
    case 2:
      if ( !sub_60237208(a1 + 444, a1 + 80, 0, 0) )
      {
        sub_60237560(a1 + 444);
        FIELD_U32(a1, 548) = 0;
      }
LABEL_11:
      result = FIELD_U8(a1, 552);
      if ( FIELD_U8(a1, 552) )
        goto LABEL_12;
      return result;
    case 3:
      result = FIELD_U8(a1, 553);
      if ( FIELD_U8(a1, 553) )
        return result;
      result = FIELD_U8(a1, 216);
      if ( (result & 2) != 0
        || FIELD_F32(a1, 128) == 0.0 && FIELD_F32(a1, 132) == 0.0 && FIELD_F32(a1, 136) == 0.0 )
      {
        return result;
      }
LABEL_12:
      result = 1;
      goto LABEL_38;
    default:
      return result;
  }
}
