/* sub_604885CC
 * address: 0x604885CC   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604885CC(int a1)
{
  StateMethodExecuter *result; // r0
  StateBase *v3; // r1
  unsigned int v4; // r0
  _DWORD *v5; // r5
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r6
  unsigned int v9; // r0

  result = (StateMethodExecuter *)(*(_DWORD *)(FIELD_U32(a1, 14240) + 5948) - 1);
  switch ( (unsigned int)result )
  {
    case 0u:
      v3 = (StateBase *)&unk_60C9F640;
      goto LABEL_14;
    case 1u:
      FIELD_U32(a1, 13820) = 1;
      FIELD_U8(dword_60CC6D78, 98529) = 0;
      sub_6081F524();
      v4 = FIELD_U32(a1, 14228);
      if ( v4 >= 4 )
        v4 = 0;
      v5 = *(_DWORD **)(a1 + 4 * v4 + 47800);
      v6 = v5[13];
      if ( v6 >= 0x43 )
        v6 = 0;
      goto LABEL_7;
    case 2u:
      FIELD_U32(a1, 13820) = 2;
      FIELD_U8(dword_60CC6D78, 98529) = 0;
      sub_6081F524();
      v9 = FIELD_U32(a1, 14228);
      if ( v9 >= 4 )
        v9 = 0;
      v5 = *(_DWORD **)(a1 + 4 * v9 + 47800);
      v6 = v5[13];
      if ( v6 >= 0x43 )
        v6 = 0;
LABEL_7:
      v7 = *(_DWORD *)(v5[17] + 4 * v6 + 3636);
      FIELD_U32(dword_60C99DB8, 614136) = v7;
      v8 = dword_60C99DEC;
      FIELD_U8(dword_60C99DEC, 580) = v7;
      FIELD_U8(v8, 581) = v5[11];
      FIELD_U8(v8, 582) = v5[12];
      FIELD_U8(v8, 583) = v5[15];
      FIELD_U8(v8, 588) = v5[10];
      FIELD_F32(v8, 584) = sub_6047457C(v5[17], 0);
      FIELD_U8(v8, 589) = v5[14];
      v3 = (StateBase *)&unk_60C9F560;
      goto LABEL_14;
    case 3u:
      v3 = (StateBase *)&unk_60C9F640;
LABEL_14:
      result = StateMgr__changeState((StateMgr *)(a1 + 20), v3);
      break;
    default:
      return result;
  }
  return result;
}
