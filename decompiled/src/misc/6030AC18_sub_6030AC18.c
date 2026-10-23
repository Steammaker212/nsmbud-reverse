/* sub_6030AC18
 * address: 0x6030AC18   size: 392   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6030AC18(int a1)
{
  int v2; // r1
  float v3; // s0
  float v4; // s0
  int v5; // r1
  float v6; // s0
  int v7; // r2
  int v8; // r5
  char v9; // r12

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = FIELD_U32(a1, 6320);
  if ( v2 )
  {
    v3 = FIELD_F32(a1, 144);
    if ( v2 == 1 )
    {
      v4 = v3 + 0.0625;
      FIELD_F32(a1, 144) = v4;
      if ( v4 < 1.2 )
      {
        v5 = LODWORD(v4);
LABEL_10:
        FIELD_U32(a1, 148) = v5;
        FIELD_U32(a1, 152) = v5;
        goto LABEL_11;
      }
      v5 = 1067030938;
      v7 = 2;
    }
    else
    {
      v6 = v3 + -0.0625;
      FIELD_F32(a1, 144) = v6;
      if ( v6 > 1.0 )
      {
        v5 = LODWORD(v6);
        goto LABEL_10;
      }
      v5 = 1065353216;
      v7 = 0;
    }
    FIELD_U32(a1, 144) = v5;
    FIELD_U32(a1, 6320) = v7;
    goto LABEL_10;
  }
LABEL_11:
  if ( FIELD_U8(a1, 6309) )
  {
    v8 = ActorMgrRelated_getById(ActorMgr__instance + 27168, FIELD_U32(a1, 6304));
    if ( ((unsigned int)&dword_60C92EFC & ~(1613802752 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C92EFC) )
    {
      dword_60C92EF8 = (int)&off_60BE9194;
      _cxa_guard_release(&dword_60C92EFC);
    }
    if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C92EF8) == 1 )
    {
      FIELD_U32(a1, 108) = FIELD_U32(v8, 6956);
      FIELD_U32(a1, 112) = FIELD_U32(v8, 6960);
      FIELD_U32(a1, 116) = FIELD_U32(v8, 6964);
      FIELD_U32(a1, 160) = FIELD_U32(v8, 160);
    }
  }
  sub_602A33AC((_BYTE *)a1);
  return 1;
}
