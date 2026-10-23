/* SE_SYS_CURSOR_ref_4C93C4
 * address: 0x604C93C4   size: 304   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall SE_SYS_CURSOR_ref_4C93C4(int a1)
{
  unsigned int v2; // r0
  StateMethodExecuter *result; // r0
  int *v4; // r1
  int v5; // [sp+4h] [bp-14h]

  sub_604D3C50(a1);
  v2 = FIELD_U32(a1, 615700);
  if ( v2 >= 0xA )
    v2 = 0;
  v5 = *(_DWORD *)(a1 + 52644 * v2 + 141860);
  result = (StateMethodExecuter *)(v5 - 2);
  switch ( v5 )
  {
    case 2:
      sub_60807EF0(SoundSystem_instance, "SE_SYS_CURSOR", 0, 1);
      sub_60502548(a1 + 3800);
      FIELD_U16(a1, 4852) = 0;
      sub_6047EABC((_DWORD *)(a1 + 3840));
      return (StateMethodExecuter *)sub_604D3074(a1);
    case 4:
      v4 = &dword_60CA3378;
      goto LABEL_9;
    case 6:
      v4 = &dword_60CA32D8;
      goto LABEL_9;
    case 8:
      FIELD_U32(a1, 615704) = 2;
      v4 = &dword_60CA3298;
      goto LABEL_9;
    case 9:
      FIELD_U8(a1, 615720) = 1;
      v4 = &dword_60CA33D8;
LABEL_9:
      result = StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v4);
      break;
    default:
      return result;
  }
  return result;
}
