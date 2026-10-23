/* sub_601B8068
 * address: 0x601B8068   size: 616   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B8068(__int64 a1)
{
  int v1; // r4
  int v2; // r5
  int *v3; // r1
  int v4; // r2
  int v5; // r1
  bool v6; // zf
  bool v7; // zf
  bool v8; // zf
  bool v9; // zf
  bool v10; // zf
  bool v11; // zf
  int v12; // r5
  int v13; // r5
  int v14; // r6

  v1 = a1;
  HIDWORD(a1) = FIELD_U32(a1, 1044);
  if ( SHIDWORD(a1) >= 1 )
    FIELD_U32(a1, 1044) = --HIDWORD(a1);
  LODWORD(a1) = FIELD_U32(a1, 1108);
  if ( !HIDWORD(a1) )
  {
    if ( (a1 & 1) == 0 )
      goto LABEL_39;
    v4 = FIELD_U32(v1, 1096);
    v5 = FIELD_U32(v1, 1100);
    v6 = v4 == 0;
    if ( !v4 )
      v6 = v5 == 1;
    if ( v6 )
      goto LABEL_39;
    v7 = v4 == 1;
    if ( v4 == 1 )
      v7 = v5 == 0;
    if ( v7 )
      goto LABEL_39;
    v8 = v4 == 4;
    if ( v4 == 4 )
      v8 = v5 == 5;
    if ( v8 )
      goto LABEL_39;
    v9 = v4 == 5;
    if ( v4 == 5 )
      v9 = v5 == 4;
    if ( v9 )
      goto LABEL_39;
    v10 = v4 == 2;
    if ( v4 == 2 )
      v10 = v5 == 3;
    if ( v10 )
      goto LABEL_39;
    v11 = v4 == 3;
    if ( v4 == 3 )
      v11 = v5 == 2;
    if ( v11 )
    {
LABEL_39:
      v12 = (*(int (**)(void))(dword_60C8AC64 + 8))();
      if ( v12 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
        FIELD_U16(v1, 440) &= ~4u;
      v3 = &dword_60C8AC64;
      goto LABEL_42;
    }
  }
  if ( (a1 & 1) != 0 )
  {
    HIDWORD(a1) = FIELD_U32(v1, 1096);
    LODWORD(a1) = FIELD_U32(v1, 1100);
    if ( a1 != 1
      && a1 != 0x100000000LL
      && a1 != 0x400000005LL
      && a1 != 0x500000004LL
      && a1 != 0x200000003LL
      && a1 != 0x300000002LL )
    {
      if ( (FIELD_U8(v1, 1200) & 2) != 0 )
      {
        v13 = (*(int (**)(void))(dword_60C8AE74 + 8))();
        if ( v13 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
          FIELD_U16(v1, 440) &= ~4u;
        v3 = &dword_60C8AE74;
        goto LABEL_42;
      }
      LODWORD(a1) = FIELD_U32(v1, 1196);
      switch ( (_DWORD)a1 )
      {
        case 6:
          goto LABEL_15;
        case 1:
          v14 = (*(int (__fastcall **)(int *))(dword_60C8AC40 + 8))(&dword_60C8AC40);
          if ( v14 != (*(int (__fastcall **)(int *))(dword_60C8AC40 + 8))(&dword_60C8AC40) )
            FIELD_U16(v1, 440) &= ~4u;
          v3 = &dword_60C8AC40;
          goto LABEL_42;
        case 0:
LABEL_15:
          v2 = (*(int (**)(void))(dword_60C8AC1C + 8))();
          if ( v2 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
            FIELD_U16(v1, 440) &= ~4u;
          v3 = &dword_60C8AC1C;
LABEL_42:
          LODWORD(a1) = StateMgr__changeState((StateMgr *)(v1 + 904), (StateBase *)v3);
          break;
      }
    }
  }
  return a1;
}
