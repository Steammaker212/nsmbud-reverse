/* sub_601679DC
 * address: 0x601679DC   size: 652   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601679DC(int a1, float *r1_0, unsigned int a3, _BYTE *a4)
{
  __int64 v8; // r0
  int v9; // r7
  unsigned __int8 v10; // r2
  void **v11; // r0
  void *v12; // r0
  ColliderBase *v13; // r7
  float *v14; // r2
  void *v15; // r0
  int v16; // r0
  ColliderOwnerInfo a2; // [sp+4h] [bp-34h] BYREF
  __int64 v19; // [sp+18h] [bp-20h] BYREF

  FIELD_U32(a1, 1792) = 0;
  LODWORD(v8) = sub_607160F4(TileMgr_instance, (int)*r1_0, (unsigned __int16)(int)(float)-r1_0[1], a3, 1);
  v19 = v8;
  if ( !v8 )
    return v8;
  FIELD_U8(a1, 16) = a3;
  FIELD_U8(a1, 17) = *a4;
  FIELD_U8(a1, 18) = -1;
  v9 = *((_DWORD *)r1_0 + 1);
  FIELD_F32(a1, 20) = *r1_0;
  FIELD_U32(a1, 24) = v9;
  FIELD_U32(a1, 28) = dword_60AF7950[a3];
  a2.positionPtr = (Vec3 *)(a1 + 20);
  a2._248Ptr = (Vec3 *)(a1 + 20);
  a2._56Ptr = (char *)(a1 + 16);
  a2._57Ptr = (char *)(a1 + 17);
  v10 = BYTE2(v8);
  a2.playerIdPtr = (char *)(a1 + 18);
  if ( (unsigned __int16)v8 == 15 )
  {
    if ( BYTE2(v8) <= 2u )
    {
      v12 = *(&off_60BD4740 + BYTE2(v8));
LABEL_10:
      FIELD_U32(a1, 72) = v12;
      v13 = (ColliderBase *)(a1 + 552);
      v14 = (float *)(a1 + 56);
LABEL_27:
      LODWORD(v8) = sub_60161E68(v13, &a2.positionPtr, v14);
LABEL_28:
      FIELD_U32(a1, 1792) = v13;
      if ( !v13 )
        return v8;
      goto LABEL_29;
    }
    v12 = &unk_60AF76A0;
LABEL_26:
    v13 = (ColliderBase *)(a1 + 1136);
    v14 = (float *)(a1 + 80);
    FIELD_U32(a1, 96) = v12;
    goto LABEL_27;
  }
  if ( (unsigned __int16)v8 != 12 )
  {
    if ( (unsigned __int16)v8 == 11 )
    {
      LODWORD(v8) = BYTE4(v8) & 0xF;
      if ( (_DWORD)v8 != 2 )
      {
        if ( (_DWORD)v8 == 1 )
        {
          v11 = &off_60BD4578;
LABEL_13:
          v12 = v11[v10];
          if ( v10 > 0x11u || ((1 << v10) & 0x3F418) == 0 )
            goto LABEL_10;
          goto LABEL_26;
        }
        goto LABEL_19;
      }
      v15 = *(&off_60BD46A8 + v10);
    }
    else if ( (BYTE4(v8) & 0xF) == 3 )
    {
      v15 = &unk_60AF76D0;
    }
    else
    {
      if ( (BYTE4(v8) & 0xF) != 2 )
      {
        v12 = &unk_60AF76A0;
        goto LABEL_26;
      }
      v15 = &unk_60AF76C0;
    }
    v13 = (ColliderBase *)(a1 + 104);
    FIELD_U32(a1, 48) = v15;
    LODWORD(v8) = SolidOnTopCollider_initImpl(
                    (SolidOnTopCollider *)(a1 + 104),
                    &a2,
                    (SolidOnTopColliderInfo *)(a1 + 32));
    goto LABEL_28;
  }
  LODWORD(v8) = BYTE4(v8) & 0xF;
  if ( (unsigned int)v8 == 1 )
  {
    v11 = &off_60BD4610;
    goto LABEL_13;
  }
LABEL_19:
  v13 = *(ColliderBase **)(a1 + 1792);
  if ( !v13 )
    return v8;
LABEL_29:
  FIELD_U32(v13, 0xE0) = 4;
  if ( (v19 & 0xFFFE) == 6 )
  {
    v16 = sub_60715F24(
            TileMgr_instance,
            (unsigned __int16)(int)*r1_0,
            (unsigned __int16)(int)(float)-r1_0[1],
            a3,
            1,
            a2.positionPtr,
            a2._248Ptr,
            a2._56Ptr,
            a2._57Ptr,
            a2.playerIdPtr);
    LODWORD(v19) = v19 & 0xFF00FFFF | (v16 << 16);
  }
  LODWORD(v8) = sub_601604FC((ColliderBase *)FIELD_U32(a1, 1792), &v19);
  return v8;
}
