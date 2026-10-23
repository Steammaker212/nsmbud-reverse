/* ParaGoomba__vf28C
 * address: 0x603639B0   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: GoombaBase : 0x6033CF30
// 
// Overridden by: None
int __fastcall ParaGoomba__vf28C(int a1, StageActor *a2)
{
  _BYTE *v3; // r0
  int v4; // t1

  v4 = FIELD_U8(a1, 6843);
  v3 = (_BYTE *)(a1 + 6843);
  if ( v4 )
  {
    *v3 = 0;
    EffectData_create(274, (Vec3 *)(a1 + 6828), 0, 0);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 644))(a1);
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94470);
  }
  else
  {
    GoombaBase__vf28C(a1, a2);
    return sub_603FFD60(dword_60C99DD4 + 852);
  }
}
