/* sub_606ADDB4
 * address: 0x606ADDB4   size: 512   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606ADDB4(int a1)
{
  unsigned int v2; // r3
  int v3; // r5
  int *v4; // r8
  int v5; // r0
  int *v6; // r1
  StateMgr *v7; // r0
  int v8; // r0
  int v9; // r0

  v2 = FIELD_U32(a1, 24);
  v3 = HIWORD(v2) & 3;
  ((void (__fastcall *)(int, unsigned int, int, unsigned int, unsigned int, int, int, int))loc_606BB874)(
    a1 + 6228,
    (v2 >> 20) & 0xF,
    HIWORD(FIELD_U32(a1, 20)) & 3,
    v2 >> 28,
    HIBYTE(v2) & 0xF,
    v3,
    (FIELD_U32(a1, 20) >> 19) & 1,
    HIBYTE(FIELD_U32(a1, 20)) & 1);
  v4 = (int *)(a1 + 6332);
  FIELD_U32(a1, 6332) = FIELD_U32(a1, 6296);
  FIELD_U32(a1, 6336) = FIELD_U32(a1, 6300);
  FIELD_U32(a1, 6340) = dword_60B08840[v3];
  v5 = FIELD_U32(a1, 24);
  if ( (v5 & 0x80000) != 0 )
  {
    v7 = (StateMgr *)(a1 + 6084);
    v6 = (int *)&unk_60CBA1C4;
  }
  else if ( (v5 & 0xF00000) != 0 )
  {
    ((void (__fastcall *)(int))loc_606BBA3C)(a1 + 6228);
    *v4 = FIELD_U32(a1, 6296);
    v6 = &dword_60CBA1E4;
    FIELD_U32(a1, 6336) = FIELD_U32(a1, 6300);
    v7 = (StateMgr *)(a1 + 6084);
  }
  else
  {
    v7 = (StateMgr *)(a1 + 6084);
    v6 = &dword_60CBA1A4;
  }
  StateMgr__changeState(v7, (StateBase *)v6);
  v8 = *v4;
  FIELD_U32(a1, 6100) = *v4;
  FIELD_U32(a1, 6108) = v8;
  FIELD_U32(a1, 6116) = v8;
  FIELD_U32(a1, 6124) = v8;
  FIELD_U32(a1, 6132) = v8;
  FIELD_U32(a1, 6140) = v8;
  FIELD_U32(a1, 6148) = v8;
  FIELD_U32(a1, 6156) = v8;
  FIELD_U32(a1, 6164) = v8;
  FIELD_U32(a1, 6172) = v8;
  FIELD_U32(a1, 6180) = v8;
  FIELD_U32(a1, 6188) = v8;
  FIELD_U32(a1, 6196) = v8;
  FIELD_U32(a1, 6204) = v8;
  FIELD_U32(a1, 6212) = v8;
  FIELD_U32(a1, 6220) = v8;
  v9 = FIELD_U32(dword_60C99DD4, 1052);
  FIELD_F32(a1, 6324) = (float)(*(float *)((char *)sinLutTable + ((v9 << 8) & 0xF00))
                                + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v9 << 8) & 0xF00)) * 0.0)
                                        * 0.000000059605))
                        * 0.5;
  FIELD_F32(a1, 6328) = (float)(*(float *)((char *)sinLutTable + ((v9 << 9) & 0xE00))
                                + (float)((float)(*(float *)((char *)&sinLutTable[1] + ((v9 << 9) & 0xE00)) * 0.0)
                                        * 0.000000059605))
                        * 0.5;
  return 1;
}
