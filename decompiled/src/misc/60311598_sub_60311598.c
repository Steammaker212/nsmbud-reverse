/* sub_60311598
 * address: 0x60311598   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60311598(int result, int a2)
{
  int v2; // r6
  char v3; // r12
  int v4; // r4
  int v5; // r5
  bool v6; // zf
  float v7; // r1
  Vec3 v8; // [sp+4h] [bp-1Ch] BYREF

  v4 = result;
  v5 = FIELD_U32(result, 64);
  v6 = v5 == 0;
  if ( v5 )
  {
    v2 = FIELD_U32(a2, 64);
    v6 = v2 == 0;
  }
  if ( !v6 )
  {
    result = FIELD_U32(a2, 136);
    if ( result )
    {
      if ( result == 6 )
      {
        result = Actor__getProfileId((Actor *)v2);
        if ( result != 476 )
          return result;
        v7 = FIELD_F32(v5, 112);
        v8.x = FIELD_F32(v5, 108);
        v8.y = v7;
        v8.z = 4500.0;
        EffectData_create(9, &v8, 0, 0);
        goto LABEL_15;
      }
      if ( result != 2 )
        return result;
    }
    result = FIELD_U8(v2, 84);
    if ( result != 255 )
    {
      if ( ((unsigned int)&dword_60C7B37C & ~(1613829616 << v3) & 1) == 0 )
      {
        if ( _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
      }
      result = (**(int (__fastcall ***)(int, int *))v2)(v2, &dword_60C7B378);
      if ( result == 1 )
      {
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v2 + 1168))(v2, v5, 11);
LABEL_15:
        KaniboTama__sub_60310F74(v5, 0);
        result = FIELD_U8(v4, 110) | 2;
        FIELD_U8(v4, 110) = result;
      }
    }
  }
  return result;
}
