
CudaDeviceFunction float2 Color() {
    float2 ret;
    ret.x = getPhi();
    ret.y = 1;
    return ret;
}

CudaDeviceFunction real_t getPhi() {
    return phi(0,0);
}

CudaDeviceFunction void Init() {
    phi = Phi;
    if ((NodeType & NODE_INIT) == NODE_MyBox) phi = MyBoxPhi;
}

CudaDeviceFunction void Run() { 
    phi = phi(-1,1); //Just stream
}

