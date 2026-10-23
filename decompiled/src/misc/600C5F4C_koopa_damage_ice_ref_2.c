/* koopa_damage_ice_ref_2
 * address: 0x600C5F4C   size: 544   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall koopa_damage_ice_ref_2(int a1, float *a2, int a3, int a4)
{
  char v4; // r12
  _DWORD *result; // r0
  int v10; // r1
  int v11; // r2
  float v12; // s2
  _DWORD *v13; // r1
  int v14; // r7
  int v15; // r5

  if ( ((unsigned int)&dword_60C83C20[3] & ~(1611423604 << v4) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C83C20[3]) )
    {
      dword_60C83CC8 = (int)&sead__SafeStringBase__vtable;
      dword_60C83CCC = (int)"koopa_damage";
      dword_60C83CD0 = (int)&sead__SafeStringBase__vtable;
      dword_60C83CD4 = (int)"koopa_damage_ice";
      sub_60000288();
      _cxa_guard_release(&dword_60C83C20[3]);
    }
  }
  result = (_DWORD *)(a1 + 8012);
  if ( FIELD_U32(a1, 8012) )
  {
    result = (_DWORD *)(a1 + 8044);
    if ( FIELD_U32(a1, 8044) )
    {
      result = (_DWORD *)(a1 + 8076);
      if ( FIELD_U32(a1, 8076) )
      {
        result = (_DWORD *)(a1 + 8108);
        if ( FIELD_U32(a1, 8108) )
        {
          result = (_DWORD *)(a1 + 8140);
          if ( FIELD_U32(a1, 8140) )
          {
            result = (_DWORD *)(a1 + 8172);
            if ( FIELD_U32(a1, 8172) )
            {
              result = (_DWORD *)(a1 + 8204);
              if ( FIELD_U32(a1, 8204) )
              {
                result = (_DWORD *)(a1 + 8236);
                if ( FIELD_U32(a1, 8236) )
                  return result;
                v10 = 7;
              }
              else
              {
                v10 = 6;
              }
            }
            else
            {
              v10 = 5;
            }
          }
          else
          {
            v10 = 4;
          }
        }
        else
        {
          v10 = 3;
        }
      }
      else
      {
        v10 = 2;
      }
    }
    else
    {
      v10 = 1;
    }
  }
  else
  {
    v10 = 0;
  }
  v11 = a1 + 32 * v10;
  v12 = a2[1] - FIELD_F32(a1, 112);
  FIELD_F32(v11, 7988) = *a2 - FIELD_F32(a1, 108);
  FIELD_F32(v11, 7992) = v12;
  FIELD_U32(v11, 7996) = -998637568;
  v13 = (_DWORD *)((char *)&unk_60C83CA0 + 12 * a3);
  v14 = v13[14];
  v15 = v13[15];
  FIELD_U32(v11, 8008) = v13[16];
  FIELD_U32(v11, 8004) = v15;
  FIELD_U32(v11, 8000) = v14;
  *result = a4;
  return (_DWORD *)ShuAnim_play(
                     **(_DWORD ***)(FIELD_U32(v11, 7984) + 28),
                     FIELD_U32(a1, 7092),
                     (int)&unk_60C83CA0 + 8 * a3 + 40);
}
