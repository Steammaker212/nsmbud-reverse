/* sub_600FCD74
 * address: 0x600FCD74   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600FCD74(int a1)
{
  _BOOL4 v2; // r8
  _BOOL4 v3; // r5
  _BOOL4 v4; // r6
  int result; // r0
  bool v6; // zf
  int v7; // [sp+0h] [bp-20h] BYREF
  int target[7]; // [sp+4h] [bp-1Ch] BYREF

  target[0] = 0;
  v7 = 59652323;
  v2 = moveValueTo((int *)(a1 + 156), target, &v7);
  target[0] = 0;
  v7 = 59652323;
  v3 = moveValueTo((int *)(a1 + 160), target, &v7);
  target[0] = 0;
  v7 = 59652323;
  v4 = moveValueTo((int *)(a1 + 164), target, &v7);
  result = CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( v2 )
  {
    v6 = v3;
    if ( v3 )
      v6 = v4;
    if ( v6 )
      return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C85DD4);
  }
  return result;
}
