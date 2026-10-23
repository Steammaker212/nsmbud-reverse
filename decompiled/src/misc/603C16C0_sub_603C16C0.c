/* sub_603C16C0
 * address: 0x603C16C0   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603C16C0(int a1)
{
  int result; // r0
  int *v3; // r6
  int v4; // r1
  int v5; // r0
  int *v6; // r7
  unsigned __int8 *v7; // r4
  int v8; // t1
  ActorBuildInfo v9; // [sp+4h] [bp-44h] BYREF

  v3 = (int *)(a1 + 6112);
  result = FIELD_U32(a1, 6112);
  switch ( result )
  {
    case 3:
      return (int)StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C98604);
    case 2:
      if ( *(int *)(FIELD_U32(a1, 6100) + 6300) <= 0 )
      {
        *v3 = 3;
        return 3;
      }
      else
      {
        v6 = (int *)(a1 + 6108);
        v5 = FIELD_U32(a1, 6108);
        if ( !v5 )
        {
          v8 = FIELD_U8(a1, 6104);
          v7 = (unsigned __int8 *)(a1 + 6104);
          memset(&v9.settings2, 0, 40);
          v9.settings1 = (v8 << 15) | 0x1000;
          v9.profile = Profile__get(0x330u);
          v9.position = *(Vec3 *)(v7 - 5996);
          v9.field_1C = *v7;
          v9.field_20 = 0;
          ActorMgr__create((void *)ActorMgr__instance, &v9, 0);
          *v3 = 3;
          v5 = *v6;
        }
        result = v5 - 1;
        *v6 = result;
      }
      break;
    case 1:
      result = FIELD_U8(a1, 6105);
      if ( result == 1 )
      {
        result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6100) + 720))(FIELD_U32(a1, 6100));
        v4 = 2;
        if ( result )
        {
LABEL_10:
          *v3 = v4;
          return result;
        }
        result = FIELD_U8(a1, 6105);
      }
      v4 = 3;
      if ( result == 2 )
      {
        result = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 6100) + 724))(FIELD_U32(a1, 6100));
        v4 = 3;
        if ( result )
          v4 = 2;
      }
      goto LABEL_10;
  }
  return result;
}
