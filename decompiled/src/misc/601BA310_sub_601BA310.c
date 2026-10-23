/* sub_601BA310
 * address: 0x601BA310   size: 420   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601BA310(int a1)
{
  int v2; // r0
  int v3; // r5
  int *v4; // r1
  int v5; // r5
  int v6; // r6
  int a5; // [sp+0h] [bp-20h] BYREF
  signed int v8; // [sp+4h] [bp-1Ch] BYREF

  v8 = 0x10000000;
  a5 = 0x100000;
  sub_608322C0((int *)(a1 + 180), (int *)(a1 + 1024), &v8, &a5);
  if ( sub_608332CC(a1 + 80, a1 + 948, 0.2, 15.0, 5.0) < 0.1 )
  {
    if ( (FIELD_U8(a1, 1200) & 2) != 0 )
    {
      v5 = (*(int (**)(void))(dword_60C8AE74 + 8))();
      if ( v5 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
        FIELD_U16(a1, 440) &= ~4u;
      v4 = &dword_60C8AE74;
      goto LABEL_12;
    }
    v2 = FIELD_U32(a1, 1196);
    if ( v2 != 6 )
    {
      if ( v2 == 1 )
      {
        v6 = (*(int (__fastcall **)(int *))(dword_60C8AC40 + 8))(&dword_60C8AC40);
        if ( v6 != (*(int (__fastcall **)(int *))(dword_60C8AC40 + 8))(&dword_60C8AC40) )
          FIELD_U16(a1, 440) &= ~4u;
        v4 = &dword_60C8AC40;
        goto LABEL_12;
      }
      if ( v2 )
        return;
    }
    v3 = (*(int (**)(void))(dword_60C8AC1C + 8))();
    if ( v3 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
      FIELD_U16(a1, 440) &= ~4u;
    v4 = &dword_60C8AC1C;
LABEL_12:
    StateMgr__changeState((StateMgr *)(a1 + 904), (StateBase *)v4);
  }
}
