/* sub_60029394
 * address: 0x60029394   size: 908   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60029394(int a1, int a2)
{
  unsigned __int16 *v3; // r6
  unsigned __int16 v4; // r0
  _BYTE *v5; // r5
  int v6; // r7
  int v7; // r8
  int v8; // r1
  unsigned int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  int result; // r0
  _BYTE *v13; // r5
  void (__fastcall *v14)(int, int *); // r2
  int *v15; // r1
  _BYTE *v16; // r6
  int v17; // r0
  void (__fastcall *v18)(int, int *); // r2
  int v19; // r0
  int U32; // r0
  int v21; // r0
  int *v22; // r1

  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  v3 = (unsigned __int16 *)(a1 + 7412);
  if ( FIELD_U16(a1, 7412) )
  {
    v4 = FIELD_U16(a1, 7412) - 1;
    *v3 = v4;
  }
  else
  {
    v4 = 0;
  }
  v5 = (_BYTE *)(a1 + 7441);
  if ( FIELD_U8(a1, 7441) && v4 <= 0xEu && !FIELD_U8(a1, 7426) )
  {
    v6 = a1 + 7096;
    v7 = FIELD_U32(a1, 7380);
    sub_60421938(*(_DWORD **)(a1 + 7096), FIELD_U32(a1, 7100), (int)&unk_60C7F728);
    v8 = *(_DWORD *)(FIELD_U32(a1, 7096) + 12);
    v9 = *(_DWORD *)(FIELD_U32(a1, 7096) + 68);
    if ( *(_DWORD *)(FIELD_U32(a1, 7096) + 8) > v9 )
      v8 += 4 * v9;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v8 + 4), 1);
    v10 = *(_DWORD *)(*(_DWORD *)v6 + 12);
    v11 = *(_DWORD *)(*(_DWORD *)v6 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v6 + 8) > v11 )
      v10 += 4 * v11;
    *(_DWORD *)(*(_DWORD *)v10 + 24) = v7;
    FIELD_U8(a1, 7426) = 1;
  }
  CollisionMgr_process((_BYTE *)(a1 + 648));
  result = FIELD_U8(a1, 2872);
  if ( (result & 1) != 0 )
  {
    FIELD_U32(a1, 124) = 0;
    result = *v3;
    if ( !*v3 )
    {
      switch ( FIELD_U32(a1, 7092) )
      {
        case 0:
          v13 = (_BYTE *)(a1 + 7429);
          if ( FIELD_U8(a1, 7429) >= 2u )
          {
            *v13 = 0;
            v14 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
            v15 = &dword_60C7F8A8;
            goto LABEL_43;
          }
          U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
          v14 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
          if ( U32 >= 0 )
          {
            v15 = &dword_60C7F808;
            goto LABEL_43;
          }
          v22 = &dword_60C7F8A8;
          goto LABEL_38;
        case 1:
          v13 = (_BYTE *)(a1 + 7428);
          if ( FIELD_U8(a1, 7428) >= 2u )
          {
            *v13 = 0;
            v14 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
            v15 = &dword_60C7F808;
            goto LABEL_43;
          }
          v21 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
          v14 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
          if ( v21 < 0 )
          {
            v15 = &dword_60C7F848;
            goto LABEL_43;
          }
          v22 = &dword_60C7F808;
LABEL_38:
          v14(a1, v22);
          *v13 = 0;
          return 0;
        case 2:
          v16 = (_BYTE *)(a1 + 7435);
          if ( FIELD_U8(a1, 7435) )
          {
            v17 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1);
            v18 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
            if ( v17 == 1 )
            {
              v18(a1, &dword_60C7F8A8);
            }
            else
            {
              v18(a1, &dword_60C7F848);
              FIELD_U8(a1, 7430) = 0;
            }
            goto LABEL_36;
          }
          v16 = (_BYTE *)(a1 + 7430);
          if ( FIELD_U8(a1, 7430) < 2u )
          {
            if ( !*v5 && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 724))(a1) != 1 )
            {
              (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C7F848);
LABEL_36:
              *v16 = 0;
              return 0;
            }
            v14 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
            v15 = &dword_60C7F8A8;
          }
          else
          {
            *v16 = 0;
            v14 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
            v15 = &dword_60C7F848;
          }
LABEL_43:
          result = ((int (__fastcall *)(int, int *))v14)(a1, v15);
          break;
        case 4:
          v19 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
          v14 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
          if ( v19 < 0 )
            v15 = &dword_60C7F808;
          else
            v15 = &dword_60C7F848;
          goto LABEL_43;
        default:
          v14 = *(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192);
          if ( *v5 )
            v15 = &dword_60C7F8A8;
          else
            v15 = &dword_60C7F848;
          goto LABEL_43;
      }
    }
  }
  return result;
}
