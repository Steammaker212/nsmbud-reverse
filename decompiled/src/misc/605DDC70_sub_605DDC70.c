/* sub_605DDC70
 * address: 0x605DDC70   size: 364   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DDC70(_BYTE *a1, ActiveCollider *a2, ActiveCollider *a3)
{
  int v6; // r9
  _BYTE *v7; // r5
  _BOOL4 v9; // r0
  bool v10; // zf
  unsigned int v11; // r8
  float CenterY; // s16
  char v13; // r12
  StageActor *owner; // r6
  unsigned int playerId; // r0
  bool v16; // zf

  v6 = 0;
  v7 = a1 + 6260;
  if ( (a1[6260] & 0x82) == 0 )
  {
    v9 = sub_605DBD64((int)a1);
    v10 = v9;
    if ( v9 )
      v10 = (v7[2] & 2) == 0;
    if ( !v10 )
    {
      v11 = FIELD_U32(a3, 0x88);
      CenterY = ActiveCollider_getCenterY(a2);
      if ( ActiveCollider_getBottom(a3) > CenterY )
      {
        owner = FIELD_U32(a3, 0x40);
        if ( FIELD_F32(owner, 0x7C) <= 0.0 && v11 <= 0xF && ((1 << v11) & 0x8005) != 0 )
        {
          playerId = FIELD_U8(owner, 0x54);
          if ( playerId <= 3 && !*(_WORD *)&a1[4 * playerId + 6928] )
          {
            if ( ((unsigned int)&dword_60C7B37C & ~(1616764224 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
            {
              dword_60C7B378 = (int)&off_60BC00BC;
              _cxa_guard_release(&dword_60C7B37C);
            }
            if ( (*(int (__fastcall **)(StageActor *, int *))FIELD_U32(owner, 0x0))(owner, &dword_60C7B378) == 1 )
            {
              v16 = (HIBYTE(owner[1].field_248.y) & 0x20) == 0;
              if ( (HIBYTE(owner[1].field_248.y) & 0x20) == 0 )
                v16 = (BYTE1(owner[1].effectOffset.x) & 0x10) == 0;
              if ( v16 && (owner[10].aCollider.field_110 & 1) == 0 )
              {
                (*(void (__fastcall **)(_BYTE *, StageActor *))(*(_DWORD *)a1 + 236))(a1, owner);
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return v6;
}
