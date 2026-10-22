void __fastcall sub_608044F0(
        int a1,
        int a2,
        int a3,
        _BYTE *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33)
{
  int v36; // r10
  bool v37; // zf
  int v38; // r0
  int v39; // r7
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r0
  float v49; // s0
  int v50; // [sp+74h] [bp+6Ch]

  ++*(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 28);
  v36 = *(_DWORD *)sub_60804418(a2);
  v38 = a4[1] != 0 && *a4 != 0;
  v37 = v38 == 0;
  v50 = v38;
  if ( !v38 )
  {
    v38 = (v36 != 2) | a33 ^ 1;
    v37 = v38 == 0;
  }
  if ( v37 && sub_60802694(v38) == 1 )
  {
    v39 = 1;
    *(_DWORD *)(a1 + 52) = 120;
  }
  else
  {
    v40 = *(_DWORD *)(a1 + 52);
    if ( v40 < 1 || (v41 = v40 - 1, v39 = 1, (*(_DWORD *)(a1 + 52) = v41) == 0) )
      v39 = sub_6080259C();
  }
  if ( v50 != 1 )
  {
    v42 = sub_60804418(a2);
    sub_60804F14(v42, v39);
    v43 = sub_60804418(a2);
    sub_60804F90(v43, v39);
    v44 = sub_60804418(a2);
    sub_6080500C(v44, v39);
    v45 = sub_60804418(a2);
    sub_60805088(v45, v39);
  }
  v46 = sub_60804418(a2);
  sub_60804D64(v46, v39);
  *(float *)(a1 + 36) = ((float (__fastcall *)(int))loc_608039A4)(a2);
  v47 = sub_60804418(a2);
  sub_60804DF4(v47, v39);
  ((void (__fastcall *)(int))loc_608039A4)(a2);
  v48 = sub_60804418(a2);
  sub_60804E84(v48, v39);
  v49 = ((float (__fastcall *)(int))loc_608039A4)(a2);
  sub_60804430(a2, v49);
  if ( (unsigned int)(v36 - 6) < 2 || v36 != 2 )
    JUMPOUT(0x60804714);
  if ( v39 )
    JUMPOUT(0x60804784);
  JUMPOUT(0x608047D4);
}
