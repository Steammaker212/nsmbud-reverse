/* ShellEnemy__vf2A0
 * address: 0x603A2FB8   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CarryableEnemy : 0x60273508
// 
// Overridden by: None
int __fastcall ShellEnemy__vf2A0(int a1)
{
  int v2; // r1

  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 100) = -1103101952;
  sub_600009FC((StageActor *)a1);
  v2 = FIELD_U32(a1, 6352);
  if ( v2 )
  {
    FIELD_U32(a1, 6356) = v2;
    FIELD_U32(a1, 6352) = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  FIELD_U32(a1, 336) |= 0x40000u;
  FIELD_U32(a1, 6372) = 0;
  FIELD_U32(a1, 6368) = 0;
  FIELD_U32(a1, 6364) = 0;
  FIELD_U32(a1, 6360) = 0;
  FIELD_U32(a1, 568) |= 4u;
  FIELD_U8(a1, 6556) = 0;
  return 6556;
}
