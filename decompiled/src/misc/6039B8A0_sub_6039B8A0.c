/* sub_6039B8A0
 * address: 0x6039B8A0   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6039B8A0(int a1, int a2)
{
  int v4; // r8
  int v5; // r9
  int v6; // r4
  unsigned int v7; // r5
  int v8; // r4
  unsigned int v9; // r0
  int result; // r0
  int v11; // r0
  char v12; // r12

  v4 = FIELD_U32(a2, 64);
  v5 = FIELD_U32(a1, 64);
  v6 = FIELD_S8(v4, 84);
  v7 = (unsigned __int8)v6;
  if ( SE_BOSS_CMN_DAMAGE_FIRE_ref(v5) == 1 )
  {
    v8 = 0;
    SE_VOC_SHA_DAMAGE_ref(v5, v4, 0);
    if ( v7 <= 3 )
    {
      v9 = FIELD_U8(v4, 84);
      if ( v9 < 4 )
        v8 = (char)v9;
      *(_WORD *)(v5 + 2 * v8 + 6140) = 5;
    }
    result = FIELD_U8(a1, 110) | 2;
    FIELD_U8(a1, 110) = result;
  }
  else
  {
    result = FIELD_U8(v4, 533);
    if ( result == 2 )
      return result;
    if ( result == 1 )
    {
      if ( (unsigned __int8)v6 >= 4u )
        v6 = 0;
      result = *(unsigned __int16 *)(v5 + 2 * v6 + 6140);
      if ( !*(_WORD *)(v5 + 2 * v6 + 6140) )
      {
        result = FIELD_U32(v5, 6572);
        if ( !result )
        {
          if ( *(_BYTE *)(FIELD_U32(a2, 64) + 533) != 1 || (result = sub_6079E82C(), result == 1) )
          {
            ((void (__fastcall *)(int, int))loc_6039BFF4)(v5, v4);
            FIELD_U8(a1, 110) |= 2u;
            result = FIELD_U8(a2, 110) | 2;
            FIELD_U8(a2, 110) = result;
          }
        }
      }
    }
    else
    {
      v11 = FIELD_U32(a2, 140);
      switch ( v11 )
      {
        case 2:
          goto LABEL_19;
        case 22:
          FIELD_U8(v5, 6525) = 1;
          return 6525;
        case 21:
LABEL_19:
          result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 320))(v5, a1, a2);
          if ( result )
            return result;
          break;
      }
      if ( Actor__getProfileId((Actor *)v4) == 451 )
      {
        if ( ((unsigned int)dword_60C84E84 & ~(1614395908 << v12) & 1) == 0 && _cxa_guard_acquire(dword_60C84E84) )
        {
          dword_60C84E80 = (int)&off_60BC00BC;
          _cxa_guard_release(dword_60C84E84);
        }
        result = (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C84E80);
        if ( v4 )
        {
          result ^= 1u;
          if ( !result )
            return sub_605D476C(v4);
        }
      }
      else
      {
        result = Actor__getProfileId((Actor *)v4);
        if ( result == 458 )
          return sub_6039C2BC(v5, v4);
      }
    }
  }
  return result;
}
