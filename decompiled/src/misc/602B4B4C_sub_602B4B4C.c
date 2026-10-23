/* sub_602B4B4C
 * address: 0x602B4B4C   size: 400   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_602B4B4C(Enemy *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  char v3; // r12
  StageActor *owner; // r6
  float *p_vtable; // r7
  char v9; // r12
  int v10; // r9
  int v11; // r4

  owner = FIELD_U32(a3, 0x40);
  p_vtable = (float *)&FIELD_U32(a2, 0x40);
  if ( ((unsigned int)&dword_60C90E54 & ~(1613450100 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C90E54) )
  {
    dword_60C90E50 = (int)&off_60BC04AC;
    _cxa_guard_release(&dword_60C90E54);
  }
  if ( !p_vtable || (**(int (__fastcall ***)(float *, int *))p_vtable)(p_vtable, &dword_60C90E50) != 1 )
    return 0;
  if ( Actor__getProfileId(&FIELD_U32(owner, 0x0)) == 392 )
  {
    if ( ((unsigned int)&dword_60C7B39C & ~(1613450244 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B39C) )
    {
      dword_60C7B398 = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C7B39C);
    }
    v10 = 0;
    v11 = 0;
    if ( owner )
    {
      v11 = (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B398);
      if ( v11 )
        v11 = (int)owner;
    }
    if ( (float)(FIELD_F32(owner, 0x6C) + FIELD_F32(owner, 0x23C)) >= p_vtable[27] )
      v10 = 1;
    sub_602EE7B8(v11, v10, -1);
    sub_602EE940(v11);
    (*(void (__fastcall **)(float *, int *))(*(_DWORD *)p_vtable + 192))(p_vtable, &dword_60C90E10);
  }
  return Enemy__vf100(a1, a2, a3);
}
