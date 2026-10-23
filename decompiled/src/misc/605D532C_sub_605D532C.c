/* sub_605D532C
 * address: 0x605D532C   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605D532C(int result, int a2, int a3)
{
  int v5; // r5
  int v6; // r7
  int v7; // r8
  float v8[9]; // [sp+4h] [bp-24h] BYREF

  v5 = result;
  v6 = FIELD_U32(a3, 64);
  if ( v6 )
  {
    result = Actor__getProfileId(*(Actor **)(a3 + 64));
    if ( result == 451 )
      return sub_605D547C(v5, a2, a3);
    v7 = FIELD_U32(v6, 640);
    if ( v7 )
    {
      result = FIELD_U32(v7, 12);
      if ( (unsigned int)(result - 1) >= 2 )
      {
        if ( !result )
        {
          v8[0] = FIELD_F32(v6, 108) + FIELD_F32(v6, 572);
          v8[1] = FIELD_F32(v6, 112) + FIELD_F32(v6, 576);
          v8[2] = FIELD_F32(v6, 116) + FIELD_F32(v6, 580);
          result = sub_605D56D4(v5, v8, FIELD_S8(v6, 84), 0);
          if ( result == 1 )
          {
            (**(void (__fastcall ***)(int, int))v7)(v7, v5);
            goto LABEL_14;
          }
        }
      }
      else if ( FIELD_U32(a2, 140) == 23 || (result = FIELD_U8(a3, 150), (result & 0x80) != 0) )
      {
        result = FIELD_U32(v7, 16);
        if ( !result )
        {
          result = ((int (__fastcall *)(int, int))loc_605D55EC)(v5, v6);
          if ( result == 1 )
          {
            (**(void (__fastcall ***)(int, int))v7)(v7, v5);
            FIELD_U32(v7, 16) = 1;
            FIELD_U32(v7, 8) = FIELD_U32(v5, 8);
LABEL_14:
            result = FIELD_U8(a2, 110) | 2;
            FIELD_U8(a2, 110) = result;
          }
        }
      }
    }
  }
  return result;
}
