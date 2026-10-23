/* sub_6047FDEC
 * address: 0x6047FDEC   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6047FDEC(int a1)
{
  char v1; // r12
  int v3; // r6
  int v4; // r5
  int v5; // r5
  int v6; // r0
  int v7; // r5
  int v8; // r0
  int result; // r0

  v3 = 0;
  v4 = FIELD_U32(dword_60C995D0, 32);
  if ( v4 )
  {
    if ( ((unsigned int)&dword_60C8F06C & ~(1615330848 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F06C) )
    {
      dword_60C8F068 = (int)&off_60BD94B0;
      _cxa_guard_release(&dword_60C8F06C);
    }
    if ( (*(int (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8))(v4, &dword_60C8F068) == 1 )
    {
      v3 = 1;
      FIELD_U8(a1, 100) = 1;
    }
  }
  v5 = FIELD_U32(dword_60C995D0, 32);
  if ( v5 )
  {
    if ( ((unsigned int)&dword_60C995D8 & ~(1615330984 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C995D8) )
    {
      dword_60C995D4 = (int)&off_60BD94B0;
      _cxa_guard_release(&dword_60C995D8);
    }
    if ( (*(int (__fastcall **)(int, int *))(*(_DWORD *)v5 + 8))(v5, &dword_60C995D4) == 1 )
    {
      v3 = 1;
      FIELD_U8(a1, 100) = 1;
    }
  }
  v6 = FIELD_U8(dword_60CBD8A4, 48);
  if ( FIELD_U8(dword_60CBD8A4, 48) )
    v6 = 1;
  v7 = v3 | v6;
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    if ( FIELD_U8(dword_60CC6D78, 109032) || FIELD_U8(dword_60CC6D78, 2094) )
    {
      v7 = 1;
    }
    else if ( sub_6040E4C8(LevelInfo_instance) )
    {
      v7 = 1;
    }
  }
  if ( dword_60C96478 )
    v7 |= sub_60377F40(dword_60C96478);
  v8 = FIELD_U8(a1, 100);
  if ( FIELD_U8(a1, 100) )
    v8 = 1;
  result = v7 | v8;
  FIELD_U8(a1, 99) = result;
  return result;
}
