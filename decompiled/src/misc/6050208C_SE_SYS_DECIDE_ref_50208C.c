/* SE_SYS_DECIDE_ref_50208C
 * address: 0x6050208C   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_DECIDE_ref_50208C(int a1)
{
  *(_DWORD *)a1 = off_60BFF0AC;
  FIELD_U32(a1, 4) = &off_60BFF0E0;
  FIELD_U32(a1, 8) = &off_60BFF0F0;
  FIELD_U32(a1, 12) = &off_60BFF114;
  FIELD_U32(a1, 16) = a1;
  FIELD_U32(a1, 20) = 0;
  StateMgr_ctor((StateMgr *)(a1 + 24), (StateExecuter *)(a1 + 8), (StateBase *)&dword_60CA765C);
  FIELD_U32(a1, 4) = &off_60BFF0D0;
  SE_SYS_BACK_ref(a1 + 40);
  sub_6045BF30();
  FIELD_U32(a1, 1012) = &sead__SafeStringBase__vtable;
  FIELD_U32(a1, 1016) = &byte_60B3BA34;
  FIELD_U32(a1, 1028) = 256;
  FIELD_U32(a1, 1032) = 256;
  FIELD_U32(a1, 1020) = 0;
  FIELD_U32(a1, 1024) = 0;
  FIELD_U32(a1, 1040) = 0;
  FIELD_U32(a1, 1044) = 0;
  FIELD_U32(a1, 1048) = 0;
  FIELD_U32(a1, 1052) = 0;
  memset((void *)(a1 + 500), 1, 0x200u);
  sub_6047F28C((_DWORD *)(a1 + 40), (int)"SE_SYS_DECIDE", 9);
  memset((void *)(a1 + 1056), 0, 1024);
  return a1;
}
