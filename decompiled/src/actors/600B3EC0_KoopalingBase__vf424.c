/* KoopalingBase__vf424
 * address: 0x600B3EC0   size: 128   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x6009F2A0 : Iggy
int __fastcall KoopalingBase__vf424(int a1)
{
  int *v2; // r1

  FIELD_U32(a1, 7496) = ((3 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32) + 1;
  FIELD_F32(a1, 100) = (*(float (__fastcall **)(int))(*(_DWORD *)a1 + 1092))(a1);
  if ( FIELD_S32(a1, 7496) < 2 )
    v2 = &dword_60C831DC;
  else
    v2 = &dword_60C83194;
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, v2);
}
