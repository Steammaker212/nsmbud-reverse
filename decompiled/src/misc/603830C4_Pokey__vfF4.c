/* Pokey__vfF4
 * address: 0x603830C4   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A29A8
// 
// Overridden by: None
signed int __fastcall Pokey__vfF4(int a1, ActiveCollider *a2, ActiveCollider *a3)
{
  signed int result; // r0
  char v7; // r12
  StageActor *owner; // r4
  int v9; // r7
  int v10; // r7
  float CenterY; // s16
  unsigned int v12; // r0
  unsigned int v13; // r1
  int v14; // r0
  int v15; // r2
  int v16; // r1
  int v17; // r0
  int *v18; // r1
  int v19; // r2

  result = sub_602A588C(a1);
  if ( !result )
  {
    owner = FIELD_U32(a3, 0x40);
    if ( ((unsigned int)&dword_60C7B408 & ~(1614295288 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
    {
      dword_60C7B404 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B408);
    }
    v9 = (int)&owner[17].aCollider.field_DC;
    if ( !(*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0).vtable)(owner, &dword_60C7B404) )
      v9 = 11356;
    result = *(_DWORD *)v9;
    if ( !*(_DWORD *)v9 )
    {
      v10 = FIELD_U32(a2, 0x68);
      CenterY = ActiveCollider_getCenterY(a3);
      if ( CenterY < (float)(ActiveCollider_getCenterY(a2) + 0.0) )
      {
        if ( FIELD_F32(a1, 6372) <= 0.0 )
        {
          v12 = v10 + 1;
          if ( v10 + 1 >= FIELD_U32(a1, 6328) )
            goto LABEL_23;
          v13 = FIELD_U32(a1, 6300);
          if ( v13 <= v12 )
            goto LABEL_23;
          while ( !*(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 6304) + 4 * v12) + 128) )
          {
            if ( v13 == ++v12 )
              goto LABEL_23;
          }
        }
        else
        {
          if ( v10 < 1 )
            goto LABEL_23;
          v12 = v10 - 1;
          if ( FIELD_U32(a1, 6300) < (unsigned int)(v10 - 1) )
            v12 = FIELD_U32(a1, 6300);
          if ( !v12 )
            goto LABEL_23;
          while ( !*(_BYTE *)(*(_DWORD *)(FIELD_U32(a1, 6304) + 4 * v12) + 128) )
          {
            if ( !--v12 )
              goto LABEL_23;
          }
        }
        v10 = v12;
      }
LABEL_23:
      v14 = FIELD_U32(a1, 6300);
      if ( v14 )
      {
        v15 = 0;
        v16 = FIELD_U32(a1, 6304);
        if ( (v14 & 1) != 0 )
        {
          *(_BYTE *)(*(_DWORD *)v16 + 242) |= 2u;
          v15 = 1;
        }
        if ( v14 != 1 )
        {
          v17 = v14 - v15;
          v18 = (int *)(v16 + 4 * v15 + 4);
          do
          {
            v17 -= 2;
            *(_BYTE *)(*(v18 - 1) + 242) |= 2u;
            v19 = *v18;
            v18 += 2;
            FIELD_U8(v19, 242) |= 2u;
          }
          while ( v17 );
        }
      }
      FIELD_U8(a3, 0x6E) |= 2u;
      FIELD_U32(a1, 6360) = v10;
      return 6360;
    }
  }
  return result;
}
