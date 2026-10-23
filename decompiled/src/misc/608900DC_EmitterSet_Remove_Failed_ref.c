/* EmitterSet_Remove_Failed_ref
 * address: 0x608900DC   size: 384   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall EmitterSet_Remove_Failed_ref(int a1, int a2)
{
  int v3; // r1
  int v4; // r5
  int v5; // r2
  _DWORD *v6; // r2
  int v7; // t1
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // t1
  int v15; // r12
  _DWORD *v16; // r12
  int v17; // t1
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r0
  _DWORD *v22; // r0
  int v23; // t1

  v3 = FIELD_U32(a2, 416);
  if ( v3 || (v4 = a2 + 420, FIELD_U32(a2, 420)) || !FIELD_U8(a2, 11) )
  {
    v5 = a1 + 4 * FIELD_U32(a2, 16);
    if ( FIELD_U32(v5, 116) == a2 )
    {
      FIELD_U32(v5, 116) = v3;
      v9 = FIELD_U32(a2, 16);
      v10 = *(_DWORD *)(a1 + 4 * v9 + 116);
      if ( v10 )
      {
        FIELD_U32(v10, 420) = 0;
        v9 = FIELD_U32(a2, 16);
      }
      v11 = a1 + 4 * v9;
      v13 = FIELD_U32(v11, 372);
      v12 = (_DWORD *)(v11 + 372);
      if ( v13 == a2 )
        *v12 = 0;
    }
    else
    {
      v7 = FIELD_U32(v5, 372);
      v6 = (_DWORD *)(v5 + 372);
      if ( v7 == a2 )
      {
        *v6 = FIELD_U32(a2, 420);
        v3 = FIELD_U32(a2, 416);
      }
      if ( v3 )
        FIELD_U32(v3, 420) = FIELD_U32(a2, 420);
      v8 = FIELD_U32(a2, 420);
      if ( v8 )
        FIELD_U32(v8, 416) = FIELD_U32(a2, 416);
      else
        debugPrintRelated2("EmitterSet Remove Failed.\n");
    }
    v4 = a2 + 420;
  }
  else
  {
    v15 = a1 + 4 * FIELD_U32(a2, 16);
    if ( FIELD_U32(v15, 628) == a2 )
    {
      FIELD_U32(v15, 628) = 0;
      v19 = FIELD_U32(a2, 16);
      v20 = *(_DWORD *)(a1 + 4 * v19 + 628);
      if ( v20 )
      {
        FIELD_U32(v20, 420) = 0;
        v19 = FIELD_U32(a2, 16);
      }
      v21 = a1 + 4 * v19;
      v23 = FIELD_U32(v21, 884);
      v22 = (_DWORD *)(v21 + 884);
      if ( v23 == a2 )
        *v22 = 0;
    }
    else
    {
      v17 = FIELD_U32(v15, 884);
      v16 = (_DWORD *)(v15 + 884);
      if ( v17 == a2 )
      {
        *v16 = 0;
        v18 = FIELD_U32(a2, 416);
        if ( v18 )
          FIELD_U32(v18, 420) = *(_DWORD *)v4;
      }
      if ( *(_DWORD *)v4 )
        *(_DWORD *)(*(_DWORD *)v4 + 416) = FIELD_U32(a2, 416);
      else
        debugPrintRelated2("EmitterSet Remove Failed.\n");
    }
    FIELD_U8(a2, 11) = 0;
  }
  FIELD_U32(a2, 416) = 0;
  *(_DWORD *)v4 = 0;
  return 0;
}
