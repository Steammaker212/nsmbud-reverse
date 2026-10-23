/* sub_6048FEE8
 * address: 0x6048FEE8   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6048FEE8(int a1, _BYTE *a2)
{
  char v2; // r12
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  int result; // r0
  int v13; // r2

  if ( ((unsigned int)&dword_60C9FD78[1] & ~(1615396620 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C9FD78[1]) )
  {
    dword_60C9FDA4 = 6;
    dword_60C9FDA8 = 5;
    _cxa_guard_release(&dword_60C9FD78[1]);
  }
  v5 = 0;
  FIELD_U32(a1, 47820) = 0;
  FIELD_U32(a1, 47824) = 0;
  if ( (unsigned int)dword_60C9FDA4 < 7 )
    v5 = dword_60C9FDA4;
  v6 = *(_DWORD *)(a1 + 4 * v5 + 5848);
  v7 = a1;
  if ( v6 < 0x100 )
    v7 = a1 + v6;
  if ( *a2 )
  {
    if ( FIELD_U8(v7, 4268) )
      goto LABEL_14;
    v8 = 2;
  }
  else
  {
    if ( !FIELD_U8(v7, 4268) )
      goto LABEL_14;
    v8 = 1;
  }
  FIELD_U32(a1, 47820) = v8;
LABEL_14:
  v9 = 0;
  if ( (unsigned int)dword_60C9FDA8 < 7 )
    v9 = dword_60C9FDA8;
  v10 = *(_DWORD *)(a1 + 4 * v9 + 5848);
  v11 = a1;
  if ( v10 < 0x100 )
    v11 = a1 + v10;
  result = FIELD_U8(v11, 4268);
  if ( a2[1] )
  {
    if ( FIELD_U8(v11, 4268) )
      return result;
    v13 = 2;
  }
  else
  {
    if ( !FIELD_U8(v11, 4268) )
      return result;
    v13 = 1;
  }
  FIELD_U32(a1, 47824) = v13;
  return a1 + 4;
}
