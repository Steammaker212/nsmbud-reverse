/* sub_603E5154
 * address: 0x603E5154   size: 744   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603E5154(int a1)
{
  char v1; // r12
  int v3; // r5
  int v4; // r6
  char v5; // r12
  int v6; // r6
  int v7; // r6
  int v8; // r6
  int v9; // r6
  int v10; // r4

  v3 = 0;
  v4 = FIELD_U32(a1, 32);
  if ( !v4 )
    return v3;
  if ( ((unsigned int)&dword_60C8F06C & ~(1614696828 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F06C) )
  {
    dword_60C8F068 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C8F06C);
  }
  v3 = 1;
  if ( (*(int (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8))(v4, &dword_60C8F068) )
    return v3;
  v6 = FIELD_U32(a1, 32);
  if ( ((unsigned int)&dword_60C995D8 & ~(1614696944 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C995D8) )
  {
    dword_60C995D4 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C995D8);
  }
  if ( v6 && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v6 + 8))(v6, &dword_60C995D4) )
    return v3;
  v7 = FIELD_U32(a1, 32);
  if ( ((unsigned int)&dword_60C995E0 & ~(1614697064 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C995E0) )
  {
    dword_60C995DC = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C995E0);
  }
  if ( v7 && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v7 + 8))(v7, &dword_60C995DC) )
    return v3;
  v8 = FIELD_U32(a1, 32);
  if ( ((unsigned int)&dword_60C995E8 & ~(1614697184 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C995E8) )
  {
    dword_60C995E4 = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C995E8);
  }
  if ( v8 && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v8 + 8))(v8, &dword_60C995E4) )
    return v3;
  v9 = FIELD_U32(a1, 32);
  if ( ((unsigned int)&dword_60C995F0 & ~(1614697304 << v5) & 1) == 0 && _cxa_guard_acquire(&dword_60C995F0) )
  {
    dword_60C995EC = (int)&off_60BD94B0;
    _cxa_guard_release(&dword_60C995F0);
  }
  if ( v9 && (*(int (__fastcall **)(int, int *))(*(_DWORD *)v9 + 8))(v9, &dword_60C995EC) )
    return v3;
  v10 = FIELD_U32(a1, 32);
  if ( ((unsigned int)&dword_60C995B8 & ~(1614697424 << v5) & 1) == 0 )
  {
    if ( _cxa_guard_acquire(&dword_60C995B8) )
    {
      dword_60C995B4 = (int)&off_60BD94B0;
      _cxa_guard_release(&dword_60C995B8);
    }
  }
  v3 = 0;
  if ( !v10 )
    return v3;
  else
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)v10 + 8))(v10, &dword_60C995B4);
}
