/* sub_605EB15C
 * address: 0x605EB15C   size: 552   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605EB15C(int a1, _DWORD *a2)
{
  char v2; // r12
  int result; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r7
  int i; // r4
  int v10; // r0
  int v11; // r8
  _DWORD *v12; // [sp+0h] [bp-28h]

  result = FIELD_U8(a1, 176);
  if ( (result & 0x20) != 0 )
  {
    v6 = *(_DWORD *)a2[7];
    if ( FIELD_U32(v6, 136) )
      FIELD_U32(v6, 136) = 0;
    if ( ((unsigned int)&dword_60CB1CA0[1] & ~(1616818604 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1CA0[1]) )
    {
      dword_60CB1CE0 = 1065353216;
      dword_60CB1CE4 = 1065353216;
      dword_60CB1CE8 = 1065353216;
      dword_60CB1CEC = 1065353216;
      _cxa_guard_release(&dword_60CB1CA0[1]);
    }
    if ( ((unsigned int)&dword_60CB1CA0[2] & ~(1616818688 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1CA0[2]) )
    {
      dword_60CB1CF0 = 0;
      dword_60CB1CF4 = 0;
      dword_60CB1CF8 = 0;
      dword_60CB1CFC = 0;
      _cxa_guard_release(&dword_60CB1CA0[2]);
    }
    if ( ((unsigned int)&dword_60CB1CA0[3] & ~(1616818772 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60CB1CA0[3]) )
    {
      dword_60CB1D00 = 0;
      dword_60CB1D04 = 0;
      dword_60CB1D08 = 0;
      dword_60CB1D0C = 0;
      _cxa_guard_release(&dword_60CB1CA0[3]);
    }
    v12 = a2;
    v7 = *a2;
    v8 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*a2 + 120))(*a2);
    if ( v8 >= 1 )
    {
      for ( i = 0; i != v8; ++i )
      {
        v10 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v7 + 132))(v7, i);
        v11 = v10;
        if ( v10 )
        {
          (*(void (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)v10 + 12))(v10, 0, &dword_60CB1CE0);
          (*(void (__fastcall **)(int, _DWORD, int *))(*(_DWORD *)v11 + 20))(v11, 0, &dword_60CB1CF0);
          (*(void (__fastcall **)(int, int, int *))(*(_DWORD *)v11 + 20))(v11, 3, &dword_60CB1D00);
        }
      }
    }
    if ( FIELD_U32(a1, 4) == 2 )
      ShuAnim_play(*(_DWORD **)v12[7], *(_DWORD *)a1, &dword_60CB1CC0);
    return sub_605EB3B0(*v12, 0);
  }
  return result;
}
