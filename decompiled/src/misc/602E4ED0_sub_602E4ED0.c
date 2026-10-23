/* sub_602E4ED0
 * address: 0x602E4ED0   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602E4ED0(int a1, int a2)
{
  char v2; // r12
  float *v5; // r5
  float *v6; // r6
  int (__fastcall ***v7)(_DWORD, int *); // r5
  int v8; // r7
  bool v9; // zf
  int v10; // r0
  void (__fastcall *v11)(float *, int, int); // r3

  v5 = *(float **)(a1 + 64);
  if ( ((unsigned int)dword_60C922C8 & ~(1613647600 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C922C8) )
  {
    dword_60C922C4 = (int)&off_60BC04AC;
    _cxa_guard_release(dword_60C922C8);
  }
  if ( v5 )
  {
    v6 = (float *)(**(int (__fastcall ***)(float *, int *))v5)(v5, &dword_60C922C4);
    if ( v6 )
      v6 = v5;
  }
  else
  {
    v6 = 0;
  }
  v7 = *(int (__fastcall ****)(_DWORD, int *))(a2 + 64);
  if ( ((unsigned int)&dword_60C7B364 & ~(1613647732 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  if ( v7 )
  {
    v8 = (**v7)(v7, &StageActor_RTTI);
    if ( v8 )
      v8 = (int)v7;
    v9 = v6 == 0;
    if ( v6 )
      v9 = v8 == 0;
    if ( !v9 )
    {
      if ( *((_BYTE *)v6 + 6136) )
        goto LABEL_19;
      v10 = FIELD_U8(v8, 533);
      if ( v10 != 1 )
      {
        if ( v10 != 3 )
        {
          if ( (*(int (__fastcall **)(float *, int, int))(*(_DWORD *)v6 + 256))(v6, a1, a2) != 1 )
            return;
          goto LABEL_19;
        }
        if ( (*(int (__fastcall **)(float *, int, int))(*(_DWORD *)v6 + 232))(v6, a1, a2) == 1 )
        {
LABEL_19:
          FIELD_U8(a1, 110) |= 2u;
          return;
        }
        v11 = *(void (__fastcall **)(float *, int, int))(*(_DWORD *)v6 + 260);
LABEL_25:
        v11(v6, a1, a2);
        return;
      }
      if ( !sub_602A25C0(a1, v6[28]) )
      {
        if ( (*(int (__fastcall **)(float *, int, int))(*(_DWORD *)v6 + 236))(v6, a1, a2) == 1
          || sub_602E4CF4(a1, a2, FIELD_F32(a1, 240)) == 1 )
        {
          goto LABEL_19;
        }
        if ( FIELD_U8(v8, 84) <= 3u )
        {
          v11 = *(void (__fastcall **)(float *, int, int))(*(_DWORD *)v6 + 264);
          goto LABEL_25;
        }
      }
    }
  }
}
