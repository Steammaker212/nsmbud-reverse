/* sub_605B1564
 * address: 0x605B1564   size: 396   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B1564(int a1)
{
  int v2; // r5
  int v3; // r0
  int v4; // r0
  int v6; // [sp+0h] [bp-20h] BYREF
  float v7; // [sp+4h] [bp-1Ch]
  char v8; // [sp+8h] [bp-18h]
  char v9; // [sp+9h] [bp-17h]
  __int16 v10; // [sp+Ah] [bp-16h]
  __int16 v11; // [sp+Ch] [bp-14h]

  v2 = 0;
  if ( sub_605B4CC4(a1) )
  {
    if ( FIELD_U32(a1, 6828) )
    {
      v2 = 1;
      v6 = FIELD_U32(a1, 108);
      v7 = FIELD_F32(a1, 112) + 8.0;
      v8 = FIELD_U8(a1, 6849);
      v3 = FIELD_U32(a1, 6980);
      v9 = v3;
      LOBYTE(v10) = 1;
      HIBYTE(v10) = FIELD_U8(a1, 6850);
      v11 = word_60B0545C[v3];
      SE_OBJ_BLOCK_BREAK_ref_2(dword_60CB061C, &v6, 0);
      ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
LABEL_10:
      FIELD_U8(a1, 6992) = 1;
      FIELD_U8(a1, 19) = 1;
      return v2;
    }
    v4 = FIELD_U32(a1, 6824);
    if ( FIELD_U8(a1, 6841) )
    {
      if ( v4 == -1 )
      {
        LOBYTE(v4) = FIELD_U8(a1, 6849);
LABEL_9:
        v6 = FIELD_U32(a1, 108);
        v7 = FIELD_F32(a1, 112) + 8.0;
        v8 = v4;
        v9 = FIELD_U8(a1, 6850);
        v10 = word_60B0545C[FIELD_U32(a1, 6980)];
        SE_OBJ_BLOCK_BREAK_ref_3(dword_60CB061C, &v6, 0, 0);
        ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
        v2 = 1;
        goto LABEL_10;
      }
LABEL_8:
      FIELD_U8(a1, 6849) = v4;
      goto LABEL_9;
    }
    if ( v4 != -1 )
      goto LABEL_8;
  }
  return v2;
}
