/* sub_603BC928
 * address: 0x603BC928   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603BC928(int a1)
{
  float v2; // s0
  int v3; // r0
  int result; // r0
  int v5; // [sp+4h] [bp-14h] BYREF

  sub_600035C0(a1);
  v2 = CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648), v2);
  sub_6039F328(a1, 0);
  v3 = FIELD_U32(a1, 2872);
  if ( (v3 & 0x10400) == 0x400 )
    FIELD_U32(a1, 124) = 0;
  if ( (v3 & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  v5 = 0;
  result = sub_6083246C((int *)(a1 + 156), &v5, &dword_60C98444);
  if ( result == 1 )
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C982F0);
  return result;
}
