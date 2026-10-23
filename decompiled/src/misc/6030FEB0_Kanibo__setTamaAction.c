/* Kanibo__setTamaAction
 * address: 0x6030FEB0   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall Kanibo__setTamaAction(Enemy *this, int tamaState)
{
  Actor *tama; // r5
  sead_ListNode *next; // r0
  bool v6; // zf
  int v7; // r1
  int v8; // r0
  Enemy *v9; // r1
  char v10; // r12

  if ( FIELD_U32(this, 0x28) >= 1 )
  {
    next = FIELD_U32(this, 0x24);
    v6 = next == 0;
    if ( next )
    {
      v7 = FIELD_U32(this, 0x2C);
      tama = (Actor *)((char *)next - v7);
      v6 = next == (sead_ListNode *)v7;
    }
    if ( !v6 )
    {
      while ( Actor__getProfileId(tama) != 520 )
      {
        v8 = FIELD_U32(this, 0x2C);
        v9 = *(Enemy **)((char *)&FIELD_U32(tama, 0x4) + v8);
        tama = (Actor *)((char *)&FIELD_U32(v9, 0x0) - v8);
        if ( v9 == (Enemy *)&FIELD_U32(this, 0x20) )
          tama = 0;
        if ( !tama )
          return;
      }
      if ( tama )
      {
        Actor__removeChild(&FIELD_U32(this, 0x0), tama);
        if ( ((unsigned int)&dword_60C93258 & ~(1613823812 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C93258) )
        {
          dword_60C93254 = (int)&off_60BC04AC;
          _cxa_guard_release(&dword_60C93258);
        }
        if ( (*(int (__fastcall **)(Actor *, int *))FIELD_U32(tama, 0x0))(tama, &dword_60C93254) == 1 )
        {
          if ( tamaState == 1 )
          {
            (*(void (__fastcall **)(Actor *, State *))(FIELD_U32(tama, 0x0) + 192))(tama, &KaniboTama__StateID_Unk1);
          }
          else if ( !tamaState )
          {
            (*(void (__fastcall **)(Actor *, State *))(FIELD_U32(tama, 0x0) + 192))(tama, &KaniboTama__StateID_Unk2);
          }
        }
      }
    }
  }
}
